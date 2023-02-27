
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
 

 
  typedef struct node NODE;
  NODE *start= NULL,*p,*q,*start1=NULL;
  
  
  void createatstart()
 {
 p=(NODE*)malloc(sizeof (NODE));
 printf("Enter data element:\n");
 scanf("%d",&p->data);	
 
 if (start==NULL)
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
 p->next=q->next;
 q->next=p;
 }
 q=(NODE*)malloc(sizeof(NODE));
 	q->data=p->data;
 	if(start1==NULL)
 	{
 		q->next=start1;
 		start1=q;
	 }
	 else
	 {
	 q->next=start1;
	 start1=q;
	 }
 }
 
 void traverse(){       
  	if (start==NULL)
{       
		printf("\n__________________________");
  		printf("\n\nLinked List is Empty...!\n");
  		printf("\n__________________________");
	  }
	  else 
	  {
	  	q=start;
	  	printf("\n_________________________________________________________________________________________");
	  	printf("\n\nThe nodes are\n");
	  
	  	while(q!=NULL)
		{
			printf("%d\t",q->data);
			q=q->next;
		  }
		  printf("\n________________________________________________________________________________________");  	  
	  }	
 }
 


 

 int main ()
 {
 	int ch,i;
 	do{
 		
 		printf ("\n\nEnter the option that you want:\n\n1)Create at start\n2)Traverse\n3)Check whether nodes are Palindrome\n4)Exit\n\n");
		 scanf("%d",&ch);
		printf("You entered option as a:%d\n\n",ch);
		
		switch(ch)
		{
			case 1:{
				createatstart();
				break;
			}
			
			case 2:{
				traverse();
				break;
			}
			case 3:{
			p=start;
			q=start1;
			i=0;
			
				while(p!=NULL) 
				 {
				if (p->data!=q->data)
				{
					i++;
				}
				p=p->next;
				q=q->next;
				
				}
				if(i==0)
				{
					printf("\n__________________________");
					printf("\n\nList is Palindrome");
					printf("\n__________________________");
				}
				else
				{
					printf("\n__________________________");
					printf("\n\nList is not palindrome");
					printf("\n__________________________");
				}
				break;
				default:printf("\nIncorrect choice\n");	
			}
			
			case 4:{	
			
				break;
			}	
		} 		
 }while(ch!=4);
}
