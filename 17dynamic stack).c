 

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
	int data;
	struct stack *next;
};
typedef struct stack STACK;
STACK *head=NULL,*p,*q;
int main()
{
	int ch,i;
	do
	{
		printf("\nenter your choice:\n");
		printf("1.push_create at start\n2.pop_delete at start\n3.top of stack\n4.traverse\n5.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1://push
				{
					printf("enter the data:\t");
					p=(STACK*)malloc(sizeof(STACK));
					scanf("%d",&p->data);
					if(head==NULL)
					{
						p->next=NULL;
						head=p;
					}
					else
					{
						p->next=head;
						head=p;
					}
				}
			break;
			case 2://pop
				{
					if(head==NULL)
					{
						printf("stack underflow..!\n");
					}
					else
					{
						p=head;
						head=head->next;
						printf("%d is popped.\n",p->data);
						free(p);
					}
				}
			break;
			case 3://top of stack
				{
					if(head==NULL)
					{
						printf("stack is empty..!\n");
					}
					else
					{
						p=head;
						printf("%d is top of the stack.",p->data);
					}
				}
			break;
			case 4://traverse
				{
					if(head==NULL)
					{
						printf("stack is empty..!\n");
					}
					else
					{
						p=head;
						while(p!=NULL)
						{
							printf("%d\t",p->data);
							p=p->next;
						}
					}
				}
			break;
			case 5://exit
				{
					printf("______________________________________________________________________________________________________________________");
				}
			break;
			default:
				{
					printf("invalid choice..!\n");
				}
		}
	}
	while(ch!=5);
}
