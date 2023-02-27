
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{int data;
struct node *next;
};
typedef struct node NODE;
NODE *start=NULL,*p,*q;
int main()
{	
	int ch,i,loc;
	do
	{	
		printf("\nenter the choice : \n");
		printf("1.create at start\n 2.create at end\n 3.create at given location\n 4.delete at start\n 5.delete at end\n 6.delete at given loaction\n 7.traverse\n 8.exit\n");
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
			case 3: //create at given location
			{
				printf("enter the location :");
				scanf("%d",&loc);
				printf("enter data:	");
				p=(NODE*)malloc(sizeof(NODE));
				scanf("%d",&p->data);
				
				if(start==NULL)
				{
					if(loc==1)
					{
						p->next=NULL;
						start=p;
					}
					else
					{
						printf("location invalid..!\n");
					}
				}
				else
				{	
					if(loc==1)
					{
						p->next=start;
						start=p;	
					}
					else
					{
						i=1;
						q=start;
						while(i<loc-1&&q!=NULL)
						{
							q=q->next;
							i++;
						}
					
						if(q !=NULL)
						{
							p->next=q->next;
							q->next=p;
						}
						else
						{
							printf("invalid location...!!\n");
						}
					}
				}
			}
			break;
			
			case 4: //delete at start
			{	if(start==NULL)
				{
					printf("linked list is empty, delete cannot be performed..!\n");
				}
				else
				{
					p=start;
					start=p->next;
					printf("%d data is deleted\n",p->data);
					free(p);
				}
			}
			break;
			case 5:// delete at end
			{	if(start==NULL)
				{
					printf("delete cannot be performed, linked list is empty..!\n");
				}
				else
				{
					p=start;
					while(p->next!=NULL)
					{	
						q=p;
						p=p->next;
					}
					q->next=NULL;
					printf("%d data is deleted\n",p->data);
					free(p);
				}
			}
			
			break;
			case 6://delete at given location
			{   printf("enter location:\t");
				scanf("%d",&loc);
				if(start==NULL)
				{
					printf("delete cannot be performed because linked list is empty..!\n");
				}
				else
				{
					if(loc==1)
					{
						p=start;
						start=p->next;
						printf("%d data is deleted\n",p->data);
						free(p);
					}
					else
					{	
						i=1;
						p=start;
						while(i<loc&&p!=NULL)
						{	q=p;
							p=p->next;
							i++;
						}
						if(p!=NULL)
						{
							q->next=p->next;
							printf("%d data is deleted\n",p->data);
							free(p);
						}
						else
						{
							printf("invalid location..!\n");
						}
					}
				}
			}
			break;
			case 7://traverse
				{
					if(start==NULL)
					{
						printf("linked list is empty...?\n");
					}
					else
					{	printf("data in linked list is as follows:\n");
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
			case 8:
			break;
			default:
				{
					printf("enter valid choice..!\n");
				}
		}
	}
	while(ch!=8);
}
