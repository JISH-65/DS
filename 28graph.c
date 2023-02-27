#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	//int weight;
	struct node *next;
};
typedef struct node NODE;
NODE *adjacency[5]={NULL,NULL,NULL,NULL,NULL},*p;
int main()
{
	int i,j,k;
	for(i=0;i<5;i++)
	{
		printf("\nenter the number of adjacent nodes:");
		scanf("%d",&k);
		for(j=0;j<k;j++)
		{
			p=(NODE*)malloc(sizeof(NODE));
			printf("enter node data:");
			scanf("%d",&p->data);
			if(adjacency[i]==NULL)
			{
				p->next=NULL;
				adjacency[i]=p;
			}
			else
			{
				p->next=adjacency[i];
				adjacency[i]=p;
			}
		}
	}
	return 0;
}