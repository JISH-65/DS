 
#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};


struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}


int maxSubtreeSum(struct Node* root, int* maxSum) {
    if (root == NULL) {
        return 0;
    }
    
    int leftSum = maxSubtreeSum(root->left, maxSum);
    int rightSum = maxSubtreeSum(root->right, maxSum);
    int subtreeSum = leftSum + rightSum + root->data;
    
    if (subtreeSum > *maxSum) {
        *maxSum = subtreeSum;
    }
    
    return subtreeSum;
}


int main() {
    
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    
 
    int maxSum = 0;
    maxSubtreeSum(root, &maxSum);
    	printf("_________________________________________\n");
    printf("Maximum subtree sum is %d\n", maxSum);
    	printf("_________________________________________\n");
    
    return 0;
}
