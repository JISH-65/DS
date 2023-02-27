 
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
NODE *start=NULL,*p,*q,*z;
int main()
{	int ch;

	do
	{
		printf("\nenter your choice:\n");
		printf("1.create at start\n2.traverse\n3.duplicate\n4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1://creating a linked list using the logic of create at start.
		{	
			printf("enter the data.\n");
			p=(NODE*)malloc(sizeof(NODE));
			scanf("%d",&p->data);
			if(start==NULL)
			{
				p->next=NULL;
				start=p;
			}	
			else
			{
				p->next=start;
				start=p;
			}
		}
		break;
		case 2://traverse
		{	
			if(start==NULL)			//if linked list is empty
			{
				printf("linked list is empty..!\n");
			}
			else					//if linked list contaioning some elements
			{
				q=start;
				while(q!=NULL)	
				{
					printf("%d\t",q->data);
					q=q->next;
				}
			}
		}
		break;
		case 3:
		{
			if(start==NULL) 					//if linked list is empty
			{
				printf("no data in linked list..!\n");
			}
			else if(start->next==NULL)			//if linked list is containing only one element
			{
				p=start;
				printf("%d\n",p->data);
			}
			else
			{
				q=start;
				p=q->next;
				while(p!=NULL)
				{
					if(p->next!=NULL)
					{
						if(p->data==q->data)
						{
							q->next=p->next;
							free(p);
							p=q->next;
						}
						else
						{
							p=p->next;
							q=q->next;
						}
					}
					else
					{
						if(p->data==q->data)
						{
							q->next=NULL;
							free(p);
							p=q->next;
						}
						else
						{
							q=q->next;
							q->next=NULL;
							p=p->next;
						}
					}
				}
			}
		}
		break;
		case 4://exiting
		break;
		default://choice enetered other than 4
			{
				printf("invalid location:");
			}
		}
	}
	while(ch!=4);
	return 0;
}
    
