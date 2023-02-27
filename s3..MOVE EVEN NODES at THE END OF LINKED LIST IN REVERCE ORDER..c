 
#include<stdio.h>
#include<stdlib.h>
void createatstart();
void createatend();
void merge();  
void traverce();
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *start=NULL,*p,*q,*start1=NULL,*start2=NULL,*r;   /*for main list start
                                                         for odd node start1
                                                         for even node start2 
                                                         is used*/

int main()
{
    int ch,i;
    do
    {
        printf("-------------------------------------------------------------------------------\n");
        printf("1:create list\n2:travece\n3:for creating even node at end in reverce order \n4:exit\n");
        printf("-------------------------------------------------------------------------------\n");
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
              printf("-------------------------------------------------------------------------------\n");
             printf("\t\t\t\tlinked list is:\n");
             printf("-------------------------------------------------------------------------------\n");
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
            
            if(start==NULL)
            {
                printf("list is empty\n");
            }
            else
            {
                i=1;
                p=start;
                while(p!=NULL)
                {
                    q=(NODE*)malloc(sizeof(NODE));
                    q=p;
                    p=p->next;

                    if(i%2==0)          //for even position node.
                    {
                        createatstart();                        
                        
                    }
                    else                //for odd position node.
                    {                      
                      createatend();
                    }                   
                    
                     ++i;
                    
                }
               merge();
               traverce();
            }

        case 4:                         //exit.
        break;

        default:
        printf("invalid choise\n");
        break;
        }
    }while(ch!=4);
}

void createatstart()                //this logic is for creating second list 
{                                   //for creating reverce even node from main list.
    
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
}

void createatend()                  //this logic is for creating first list.
{                                   //for creating odd node from main list.
    if(start1==NULL)
                        {
                            q->next=start1;
                            start1=q;
                        }
                        else
                        {
                            r=start1;
                            while(r->next!=NULL)
                            {
                                r=r->next;

                            }
                            q->next=r->next;
                            r->next=q;
                        }
}
void merge()                    //this logic is for merge first and second node which is created from main list.
{
    p=start1;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=start2;  
}

void traverce()                 //this function is used for displaying merged list.
{
     p=start1;
    printf("-------------------------------------------------------------------------------\n");
    printf("\t\t\t\trequired list is:\n");
     printf("-------------------------------------------------------------------------------\n");
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}
