
#include<stdio.h>
#include<stdlib.h>
struct node* create();
void inorder();
void preorder();
void postorder();
void search();
struct node
{
	int data,key;
	struct node *lchild;
	struct node *rchild;
};
typedef struct node NODE;
NODE *root=NULL,*p;
int main()
{
	int ch,data,key;
	do
	{
		printf("\n ________________________________________________________________________________________________");
		printf("\n|________________________________________________________________________________________________|");
		printf("\n1.create\n2.inorder\n3.preorder\n4.postorder\n5.search\n6.exit:");
		printf("\nenter the choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1://creating tree
				{
					printf("\nenter the data:");
					scanf("%d",&data);
					root=create(root,data);
				}
			break;
			case 2://inorder traversal
				{
					inorder(root);
				}
			break;
			case 3://preorder traversal
				{
					preorder(root);
				}
			break;
			case 4://postorder traversal
				{
					postorder(root);
				}
			break;
			case 5://searching
				{
					printf("\nenter the key element:");
					scanf("%d",&key);
					search(root,key);
				}
			break;
			case 6:
				{
					
				}
			break;
			default:
				{
					printf("\ninvalid choice...!");
				}
		}
	}
	while(ch!=6);
	return 0;
}
NODE* create(NODE *p,int data)
{
	if(p==NULL)
	{
		p=(NODE*)malloc(sizeof(NODE));
		p->data=data;
		p->lchild=NULL;
		p->rchild=NULL;
	}
	else if(data<p->data)
	{
		p->lchild=create(p->lchild,data);
	}
	else
	{
		p->rchild=create(p->rchild,data);
	}
	return p;
}
void inorder(NODE *p)
{
	if(p!=NULL)
	{
		inorder(p->lchild);
		printf("%d\t",p->data);
		inorder(p->rchild);
	}
	else
	{
		if(root==NULL)
		{
			printf("\ntree empty..!");
		}
	}
}
void preorder(NODE *p)
{
	if(p!=NULL)
	{
		printf("%d\t",p->data);
		preorder(p->lchild);
		preorder(p->rchild);	
	}
	else
	{
		if(root==NULL)
		{
			printf("\ntree empty..!");
		}
	}
}
void postorder(NODE *p)
{
	if(p!=NULL)
	{
		postorder(p->lchild);
		postorder(p->rchild);
		printf("%d\t",p->data);
	}
	else
	{
		if(root==NULL)
		{
			printf("\ntree empty..!");
		}
	}
}
void search(NODE *p,int key)
{	
		if(root==NULL)
		{
			printf("\ntree empty...!!search cannot be performed..!");
		}
		else if(p==NULL)
		{
			printf("\nsearch unsuccessful...!!");
		}
		else if(key==p->data)
		{
			printf("\nsearch successful...!!");
		}
		else if(key<p->data)
		{
			search(p->lchild,key);
		}
		else if(key>p->data)
		{
			search(p->rchild,key);
		}
		else
		{
			printf("\ntree empty...!!search cannot be performed..!");
		}
		
}
