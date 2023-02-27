 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
typedef struct node NODE;
NODE *start=NULL,*p,*q;
int main()
{	int ch,i,loc;
	do
	{	
		printf("\nenter your choice:\n");
		printf("1.create at start\n 2.create at end.\n 3.create at given loaction.\n 4.delete at start.\n 5.delete at end.\n 6.delete at given location.\n 7.traverse \n");
		scanf("%d",&ch);
		switch(ch)
		{
				case 1://create at start
				{ printf("enter the data:\n");
				p=(NODE*)malloc(sizeof(NODE));
				scanf("%d",&p->data);
				
					if(start==NULL)
					{
						p->next=NULL;
						p->prev=NULL;
						start=p;
					}
					else
					{
						p->next=start;
						p->prev=NULL;
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
							p->prev=NULL;
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
							p->prev=q;
							q->next=p;
						}
					}
				break;
				case 3://create at given location.
				{	printf("enter the location.\n");
					scanf("%d",&loc);
					printf("enter the data:\n");
					p=(NODE*)malloc(sizeof(NODE));
					scanf("%d",&p->data);
					if(start==NULL)//when ll is empty.
					{
						if(loc==1)
						{
							p->next=NULL;
							p->prev=NULL;
							start=p;
						}
						else
						{
							printf("invalid location...!\n");
						}
					}
					else//when ll is containing some elements .
					{
						if(loc==1)//when loc is 1.
						{
							p->next=start;
							p->prev=NULL;
							start=p;
						}
						else//when loc is other than 1.
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
								if(q->next!=NULL)//creating at laction except last
								{
									p->next=q->next;
									q->next->prev=p;
									p->prev=q;
									q->next=p;
								}
								else			//creating at last
								{
									p->next=NULL;
									q->next=p;
									p->prev=q;
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
				{
					if(start==NULL)
					{
						printf("delete cannot be performe,linkled list is empty.\n");
					}
					else
					{
						if(start->next==NULL)
						{
							p=start;
							start=NULL;
							printf("%d data is deleted",p->data);
							free(p);
						}
						else
						{
							p=start;
							start->next->prev=NULL;
							start=start->next;
							printf("%d data is deleted.\n",p->data);
							free(p);
						}
					}
				}
				break;//delete at end.
				case 5:
					{
						if(start==NULL)
						{
							printf("delete cannot be performed , linked list is empty...!");
						}
						else
						{
							if(start->next==NULL)
							{
								p=start;
								start=NULL;
								printf("%d data is deleted.\n",p->data);
								free(p);
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
							}
						}
					}
				break;
				case 6://delete at given location.
					{  printf("enter the location:");
						scanf("%d",&loc);
						if(start==NULL)	//linked list is empty
						{
							printf("delete cannot be performed, linked list is empty..!\n");
						}
						else			//linked list containing one or many elements
						{
							if(start->next==NULL) //linked list containing one element
							{
								if(loc==1)
								{
									p=start;
									start=NULL;
									printf("%d data is deleted.\n",p->data);
									free(p);
								}
								else
								{
									printf("invalid location..!\n");
								}
							}
							else				//linked list containing many elements
							{
								if(loc==1)//deleting first element 
								{
									p=start;
									start->next->prev=NULL;
									start=start->next;
									printf("%d data is deleted.\n",p->data);
									free(p);
								}
								else	//deleting element element except first
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
										if(p->next!=NULL)//deleing any elements except first and last
										{
											q->next=p->next;
											p->next->prev=q;
											printf("%d data is deleted.\n",p->data);
											free(p);
										}
										else			//deleting last element.
										{
											q->next=NULL;
											printf("%d data is deleted.\n",p->data);
											free(p);
										}
									}
									else
									{
										printf("invalid location..!\n");
									}
								}
							}
						}
					}
				break;
				case 7://traverse
				{
					if(start==NULL)
					{
						printf("linked list is empty");
					}
					else
					{   
						printf("data in the linked list is:\n");
						q=start;
						while(q!=NULL)
						{
							printf("%d\t",q->data);
							q=q->next;
						}
					}
				}
				break;
				case 8:
				break;
				default:
				{
					printf("invalid choice...!\n");
				}					
		}
	}
	while(ch!=8);
}

