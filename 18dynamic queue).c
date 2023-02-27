 

#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int data;
	struct queue *next;
};
typedef struct queue QUEUE;
QUEUE *front=NULL,*rear=NULL,*p,*q;
int main()
{
	int ch;
	do
	{	
		printf("\nenter your choice.\n");
		printf("1.enqueue.\n2.dequeue.\n3.traverse.\n4.exit.\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1://enqueue_create at end
				{
					printf("enter your data:\t");
					p=(QUEUE*)malloc(sizeof(QUEUE));
					scanf("%d",&p->data);
					if(front==NULL)
					{
						p->next=NULL;
						front=p;
						rear=p;
					}
					else
					{
						p->next=NULL;
						rear->next=p;
						rear=p;
					}
				}
			break;
			case 2://dequeue_delete at start
				{
					if(front==NULL)
					{
						printf("queue underflow..!\n");
					}
					else
					{
						p=front;
						front=front->next;
						printf("%d is deueued\n",p->data);
						free(p);
					}
				}
			break;
			case 3://traverse
				{
					if(front==NULL)
					{
						printf("queue is empty..!\n");
					}
					else
					{
						q=front;
						while(q!=NULL)
						{
							printf("%d\t",q->data);
							q=q->next;
						}
					}
				}
			break;
			case 4://exitting
				{
					printf("______________________________________________________________________________________________________________-");
				}
			break;
			default:
			{
				printf("invalid choice..!\n");
			}
		}
	}
	while(ch!=4);
}
