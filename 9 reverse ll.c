 

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{int data;
struct node *next;
};
typedef struct node NODE;
NODE *start=NULL,*start1=NULL,*p,*q;
int main()
{	
	int ch,i,loc;
	do
	{	
		printf("\nenter the choice : \n");
		 printf("1.create at start\n1.create at end\n3.traverse of original linked list\n4.reverse the input linked list\n5.traverse of reversed linked list\n6.exit\n");
scanf("%d",&ch);
    switch(ch)
  	{
	case 1://create at start
		{	printf("enter data:	");
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
	case 2://create at end
		{	printf("enter data:	");
			p=(NODE*)malloc(sizeof(NODE));
			scanf("%d",&p->data);
			if(start==NULL)
			{
				p->next=NULL;
				start=p;
			}
			else
			{
				q=start;
				while(q->next!=NULL)
				{	
					q=q->next;
				}
				p->next=NULL;
				q->next=p;
			}
		}
	break;
	case 3://traversing of original linked list.
		{
			if(start==NULL)
			{
				printf("linked list is empty...?\n");
			}
			else
			{
				printf("data in linked list is as follows:\n");
				q=start;
				while(q!=NULL)
				{
					printf("%d  \t",q->data);
					q=q->next;
				}
				printf("\n");
			}
		}
	break;
	case 4://reversing the linked list
    {
        if(start==NULL)
        {
           printf("no data to be reversed");
        }
        else if(start->next==NULL)
        {
            p=start;
            p->next=NULL;
            start1=p;
            start=NULL;
        }
        else
        {
            p=start;
            q=start->next;
            while(q!=NULL)
            {
                if(start1==NULL)
                {
                	start=start->next;
                    p->next=NULL;
                    start1=p;
                    q=start;
                }
                else
            	{
                	start=start->next;
                    p->next=start1;
                    start1=p;  
                    q=start;
                }
            p=q;
            q=q->next;
            }
            p->next=start1;
            start1=p;
            start=NULL;
        }
    }
    break;
	case 5://traversing of reversed linked list..
		{
			if(start1==NULL)
			{
				printf("linked list is empty...?\n");
			}
			else
			{	printf("data in linked list is as follows:\n");
				q=start1;
				while(q!=NULL)
				{
					printf("%d  \t",q->data);
					q=q->next;
				}
				printf("\n");
			}
					
		}
		break;
		case 6:
		break;
		default:
			{
				printf("enter valid choice..!\n");
			}
		}
	}
	while(ch!=6);
}
    
