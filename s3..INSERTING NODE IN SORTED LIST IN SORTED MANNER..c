	
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *start=NULL,*p,*q,*r;   /*for main list start
                                                         for odd node start1
                                                         for even node start2 
                                                         is used*/

int main()
{
    int ch,i;
        

    printf("\t\t\tcreate sorted list\n");
    do
    {
       
        printf("1:create list\n2:travece\n3:inserion in sorted list \n4:exit\n");
       
        printf("enter the choise :");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1:                                     //create at end is used to create a linked list.
            p=(NODE*)malloc(sizeof(NODE));
            printf("enter the data:");
            scanf("%d",&p->data);
            if(start==NULL)                             //when list is empty
            {
                p->next=NULL;
                start=p;
            }
            else                                        //containing some element.
            {
                q=start;
                while(q->next!=NULL)
                {
                    q=q->next;
                }
                p->next=NULL;
                q->next=p;
            }
            break;

            case 2:                                     //logic for displaying main linked list.
            
             printf("\t\t\t\tlinked list is:\n");
            
             if(start==NULL)
            {
                printf("list is empty\n");

            }
            else
            {
                q=start;
                while(q!=NULL)
                {
                    printf("%d\n",q->data);
                    q=q->next;
                }
                
            }
            break;

            case 3:                     //creating required linked list
            p=(NODE *)malloc(sizeof(NODE));
		    printf("\nEnter data to add : ");
		    scanf("%d",&p->data);
		    if(start==NULL)			//if list is empty
		    {
		        start=p;
		        p->next=NULL;
		    }
		    else
		    {
		        q=start;
		        if(q->data > p->data)		//creat at start
		        {
		            p->next=start;
		            start=p;            
		        }
		        else
		        {
		            while(p->data > q->data && q->next!=NULL)		//to reach previous node of inserting position
		            {
		                r=q;
		                q=q->next;
		            }
		               if(q->next!=NULL)	//creating other than end
		               {
					   
		               p->next=r->next;
		               r->next=p;
		           		}
		           		else			//creating  than end
		           		{
		           			p->next=q->next;
							   q->next=p;	
						}
		            }
		        }
		    
        break;

        case 4:                         //exit.
        break;

        default:
        printf("invalid choise\n");
        break;
        }
    }while(ch!=4);
}

