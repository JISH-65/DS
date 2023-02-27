 

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
NODE *start=NULL,*p,*q,*last=NULL;
int main()
{
	int i,loc,ch;
	do
	{
		printf("\nenter your choice.\n");
		printf("1.create at start\n 2.create at end\n 3.create at given location\n 4.delete at start\n 5.delete at end\n 6.delete at given location\n 7.traverse\n 8.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1://create at start.
				{	
					printf("enter the data:\n");
					p=(NODE*)malloc(sizeof(NODE));
					scanf("%d",&p->data);
					if(start==NULL)
					{
						p->next=start;
						start=p;
						last=p;
					}	
					else
					{
						p->next=start;
						start=p;
					}
				}
			break;
			case 2://create at end
				{	
					printf("enter the data:\n");	
					p=(NODE*)malloc(sizeof(NODE));
					scanf("%d",&p->data);
					if(start==NULL)
					{
						p->next=NULL;
						start=p;
						last=p;
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
						last=p;
					}
				}
			break;
			case 3://create at given location.
				{ 	
					printf("enter the location.:");
					scanf("%d",&loc);
					printf("enter the data:");
					p=(NODE*)malloc(sizeof(NODE));
					scanf("%d",&p->data);
				if(start==NULL)//ll is empty.
					{
						if(loc==1)
						{
							p->next=NULL;
							start=p;
							last=p;
						}
						else
						{
							printf("invalid location..!\n");
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
							if(q!=NULL)
							{
								if(q->next!=NULL)
								{
									p->next=q->next;
									q->next=p;
								}
								else			//FOR LAST ELEMENT ADDITION.
								{
									p->next=NULL;
									q->next=p;
									last=p;
								}
							}
							else
							{
								printf("invalid location..!\n");
							}
						}
					}
				}
			break;
			case 4://delete at start.
				{	//1.ll empty.
					//2.ll containing only 1 element,
					//3.ll containing more than one element.
					if(start==NULL)//ll is empty
					{
						printf("linked list is empty,delete cannot be performed..\n");
					}
					else
					{	
						if(start->next==NULL)//ll containing one element===========
						{
							p=start;
							start=NULL;
							printf("%d data is been deleted\n",p->data);
							free(p);
							last=NULL;
							
						}	
						else//ll containg more 
						{
							p=start;
							start=start->next;
							printf("%d data is deleted\n",p->data);
							free(p);
						}
					}	
				}
			break;
			case 5://delete at end.
				{
					if(start==NULL)
					{
						printf("linked list is empty, delete cannot be performed.\n");
					}
					else
					{	if(start->next==NULL)
						{
							p=start;
							start=NULL;
							printf("%d data is deleted\n",p->data);
							free(p);
							last=NULL;
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
							printf("%d data is deleted.\n",p->data);
							free(p);
							last=q;
						}
					}
				}
			break;
			case 6://delete at given location.
				//1.ll empty
				//2.1 element
				//3.containing more elements
				{ 	printf("enter the location:");
					scanf("%d",&loc);
					if(start==NULL)//ll is empty
					{
						printf("delete cannot be performed, linked list is empty..!\n");
					}
					else if(start->next==NULL)// ll conttaining 1 element
					{
						if(loc==1)
						{
							p=start;
							start=NULL;
							printf("%d data is deleted\n",p->data);
							free(p);
							last=NULL;
						}
						else
						{
							printf("invalid location..!\n ");
						}
					}
					else // ll containing more elements
					{  if(loc==1)//deleting first element
						{
							p=start;
							start=start->next;
							printf("%d data is deleted\n",p->data);
							free(p);
						}
						else //deleting last eleement and also from secondhhh
						{
							i=1;
							p=start;
							while(i<loc&&p!=NULL)
							{	
								q=p;
								p=p->next;
								i++;
							}
							if(p!=NULL)
							{
								if(p->next!=NULL) //deleing elements from second except last
								{
									q->next=p->next;
									printf("%d data is deleted..!\n",p->data);
									free(p);
								}
								else 				//deleting last element.
								{
									q->next=NULL;
									printf("%d data is deleted..!\n",p->data);
									free(p);
									last=q;
								}			
							}
							else
	 						{
								printf("invalid location..!\n");
							}
						}
					}
				}
			break;
			case 7:
				{	
					if(start==NULL)
					{
						printf("linked list is empty..!!\n");
					}
					else
					{
						printf("the data in the linked list is:\n");
						p=start;
						while(p!=NULL)
						{
							printf("%d\t",p->data);
							p=p->next;
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
