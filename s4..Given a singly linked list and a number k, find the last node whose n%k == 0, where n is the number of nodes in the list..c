 
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
 
  int loc,i;
  typedef struct node NODE;
  NODE *start= NULL,*p,*q;
  
  
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
 	p->next=start;
 	start=p;
 }
 }
 
 void traverse(){       
  	if (start==NULL)
  	{
  		printf("Lined List is Empty...!");
	  }
	  else 
	  {
	  	q=start;
	  	printf("\n\nThe nodes are\n");
	  	while(q!=NULL)
		{
			printf("%d\t",q->data);
			q=q->next;
		
		
		  }  
		  
	  }
 	
 }
 
 void module(){
 				int k;
				printf("Enter the number that you want to Module with node:\n");
				scanf("%d",&k);
				p=start;
				while(p!=NULL)
				{
				
				if(p->data%k==0)
				{
					q=p;
					
					
				}
				p=p->next;
				}
				printf("\n_________________________________________________________________________");
				printf("\nThe nodes which is divisible by 'K' is: %d",q->data);
				printf("\n_________________________________________________________________________");
 	
 }
 
 int main ()
 {
 	int ch;
 	do{
 		
 		printf("\n\n\nEnter the option that you want:\n\n1)Create at start\n2)Traverse\n3)Check whether which node is divisible by 'K'\n4)Exit\n\n");
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
				module();
				break;
			}
			case 4:{	
			
				break;
			}
			
			
			dafault:printf("\nIncorrect choice\n");	
		} 		
 }while(ch!=8);
}
 
