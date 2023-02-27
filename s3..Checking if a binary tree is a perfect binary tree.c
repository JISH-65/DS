

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *lchild;
  struct node *rchild;
};

typedef struct node NODE;
// Creating a new node
NODE *newnode(int data) {
  NODE *node = (NODE *)malloc(sizeof(NODE));
  node->data = data;
  node->lchild = NULL;
  node->rchild = NULL;

  return (node);
}

// Calculate the depth
int depth(NODE *node) {
  int d = 0;
  while (node != NULL) {
    d++;
    node = node->lchild;
  }
  return d;
}

// Check if the tree is perfect
bool is_perfect(NODE *root, int d, int level) {
    // Check if the tree is empty
  if (root == NULL)
    return true;

  // Check the presence of children
  if (root->lchild == NULL && root->rchild == NULL)
    return (d == level + 1);

  if (root->lchild == NULL || root->rchild == NULL)
    return false;

  return is_perfect(root->lchild, d, level + 1) &&
       is_perfect(root->rchild, d, level + 1);
}

// Wrapper function
bool is_Perfect(NODE *root) {
  int d = depth(root);
  return is_perfect(root, d, 0);
}

int main() {
  NODE *root = NULL;
  root = newnode(1);
  root->lchild = newnode(2);
  root->rchild = newnode(3);
  root->lchild->lchild = newnode(4);
  root->lchild->rchild = newnode(5);
  root->rchild->lchild = newnode(6);
  root->rchild->rchild = newnode(8);

  if (is_Perfect(root))
    printf("The tree is a perfect binary tree\n");
  else
    printf("The tree is not a perfect binary tree\n");
}
