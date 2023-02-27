 
#include<stdio.h>
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
	int i,n,loc,ch;
	do
	{
		printf("\n\nenter your choice:");
		printf("\n1.create at start.\n 2.create at end.\n 3.create at given loaction.\n 4.delete at start.\n 5.delete at end.\n 6.delete at given location.\n 7.traverse.\n 8.exit.\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1://craete at start
				{
					printf("enter the data:");
					p=(NODE*)malloc(sizeof(NODE));
					scanf("%d",&p->data);
					if(start==NULL)
					{
						p->next=p;
						start=p;
						last=p;
						
					}
					else
					{
						p->next=start;
						start=p;
						last->next=p;
					}
				}
			break;
			case 2://create at end
				{
					printf("enter the data:");
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
						/*if(start==start->next)
						{	
							q=start;
							p->next=q;
							last=p;
							q->next=p;
						}
						else
						{*/
							q=start;
							while(q->next!=start)
							{
								q=q->next;
							}
							p->next=start;
							last=p;
							q->next=p;
					//	}
					}
				}
			break;
			case 3://create at given loaction
				{	
					printf("enter the location:\n");
					scanf("%d",&loc);
					printf("enter the data:");
					p=(NODE*)malloc(sizeof(NODE));
					scanf("%d",&p->data);
					if(start==NULL)//ll is  empty
					{
						if(loc==1)//if loc=1 in empty ll
						{
							p->next=p;
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
						if(loc==1)		//creating at location=1
						{
							p->next=start;
							last->next=p;
							start=p;
						}				//creating except loc=1
						else
						{
							i=1;
							q=start;
							while(i<loc-1&&q!=last)
							{
								q=q->next;
								i++;
							}
							if(i==loc-1)//when location entered not greater than the ll's (size+1) because (size +1) is the location where we create the node at last
							{		
								if(q!=last)//creating node except last location
								{
									p->next=q->next;
									q->next=p;
								}
								else		//creating node at last location
								{
									p->next=start;
									last->next=p;
									last=p;
								}
							}
							else//when location entered  greater than the ll's (size+1) because (size +1) is the location where we create the node at last
							{
							printf("invalid location..!");
							}
 						}
					}
				}
			break;
			case 4://delete at start.
				{
					if(start==NULL)
					{
						printf("linked list is empty, delete cannot be performed...!");
					}
					else
					{
						if(start->next==start)
						{
							p=start;
							start=NULL;
							last=NULL;
							printf("%d data is deleted.\n",p->data);
							free(p);
						}
						else
						{
							p=start;
							start=start->next;
							last->next=start;
							printf("%d data is deleted.\n",p->data);
							free(p);
						}
					}
				}
			break;
			case 5://delete at end
				{
					if(start==NULL)
					{
						printf("delete cannot be performed, linked list is empty.\n");
					}
					else
					{	if(last==start)
						{
							p=start;
							start=NULL;
							last==NULL;
							printf("%d data is deleted.\n",p->data);
						}
						else
						{
							p=start;
							while(p->next!=start)
							{
								q=p;
								p=p->next;
							}
							q->next=start;
							last=q;
							printf("%d data is deleted.\n",p->data);
							free(p);
						}
					}
				}
			break;
			case 6://delete at given location
				{	
					printf("enter the loaction:\n");
					scanf("%d",&loc);
					if(start==NULL)				//if llis empty
					{
						printf("delete cannot be performed, linkedlist is empty..!\n");
					}
					else if(start==start->next)//if ll coontains only one element
					{
						if(loc==1)
						{
							p=start;
							start=NULL;
							last=NULL;
							printf("%d data is deleted.\n",p->data);
							free(p);
						}
						else
						{
							printf("invalid location.!\n");
						}
					}
					else					//if ll is containing more than 1 elements
					{
						if(loc==1)			//deleting first element
						{
							p=start;
							start=start->next;
							last->next=start;
							printf("%d data is deleted.\n",p->data);
							free(p);
						}
						else				//deleting element except first
							{
								i=1;
								p=start;
								while(i<loc&&p->next!=start)
								{
									q=p;
									p=p->next;
									i++;
								}
								if(i==loc)/*making a valid loaction for entering a valid location,because when i is lastly 
											increamented i==loc is validfor dletion if i!=loc the either loc will be greater 
											(for eg. loc=5and at that time the increamented i will be4,,,if increaments 'i'willbe 5then dletion will occur*/
								{
									if(p->next!=start)
									{
										q->next=p->next;
										printf("%d data is deleted.\n",p->data);
										free(p);
									}
									else
									{
										q->next=start;
										last=q;
										printf("%d data is deleted.\n",p->data);
										free(p);
									}
								}
								else//here condition will be for eg. loc=5  and if ll containing 2 elements increamented i willbe 2 hence invalid 
									//OR
									//if ll has 4 elements and location is 5 for deletion the the increamented i willbe 4 
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
						printf("linked list is empty...!\n");
					}
					else
					{
						printf("data in the linked list is:\n");
						q=start;
						while(q->next!=start)	/*using these logic last element is not getting printed.
												so we use another one printf out of loop which prit the data of q i.e last node data because of 
												while loop logic q in increamented to last*/
						{
							printf("%d\t",q->data);
							q=q->next;
						}
						printf("%d",q->data);//for printing the last element, which was not getting printed
					}
				}
			break;
			case 8://exit
			break;
			default:
				{
					printf("invalid choice input...!");
				}
		}
	}
	while(ch!=8);
}
