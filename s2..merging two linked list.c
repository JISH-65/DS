

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
NODE*start1=NULL,*start2=NULL,*p,*q,*r,*s;

int main()
{
   int n;
	do
	{
			printf("\nENTER YOUR CHOICE:");
	        printf("\n1.create at start in p node\n2.create at start in q node\n3.merge\n4.traverse of p node\n5.traverse of q node\n6.exit");
	        scanf("%d",&n);
       	switch(n)
       	{
		   case 1:  //create at start in p node
		   	printf("Enter the element:");
		   	p=(NODE*)malloc(sizeof(NODE));
		   	scanf("%d",&p->data);
		   	
		   	if(start1==NULL)
		   	{
		   		p->next=NULL;
		   		start1=p;
			}
			else
			{
				p->next=start1;
				start1=p;
			}
			
			break;
			
			case 2://create at start in q node
			printf("Enter the element:");
			q=(NODE*)malloc(sizeof(NODE));
			scanf("%d",&q->data);
			
			if(start2==NULL)
		   	{
		   		q->next=NULL;
		   		start2=q;
			}
			else
			{
				q->next=start2;
				start2=q;
			}
			
			break;
			
			case 3:
				p=start1;
				q=start2;
				while(p->next!=NULL && q->next!=NULL)
				{
			
						r=p->next;
						s=q->next;
						
						q->next=r;
						p->next=q;
						
					
							p=r;
							q=s;
				
				}
				
				if(p->next==NULL)
				{
					p->next=q;
				}
				else if(q->next==NULL)
				{
					q->next=p->next;
					p->next=q;
				}
				
					if(start1==NULL &&start2==NULL)
					{
						printf("Linked list is empty");
					}
					else
					{
					    p=start1;
					    while(p!=NULL)
					  {
						printf("%d\n",p->data);
						p=p->next;
					  }
					}
				
				
				break;
				
			case 4:
				if(start1==NULL)
				{
					printf("Linked list is empty");
				}
				else
				{
					p=start1;
					while(p!=NULL)
					{
						printf("%d\n",p->data);
						p=p->next;
					}
				}
				
				
				break;
				
			
			case 5:
				if(start2==NULL)
				{
					printf("Linked list is empty");
				}
				else
				{
					q=start2                                              ;
					while(q!=NULL)
					{
						printf("%d\n",q->data);
						q=q->next;
					}
				}
				
			break;
				
			
				case 6:exit;
				break;
				
				default:printf("Invalid choice!!!");
     	}
	}while(n!=6);
	
}
