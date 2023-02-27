
#include<stdio.h>

int a[20],k,i,j,size;
int front=0,rear=-1;
int flag=0;

int main()
{
    printf("enter size of array less than 20 :");       //declaring size of array
    scanf("%d",&size);
    printf("enter %d (-ve & +ve)elements :",size);     
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);                               //getting no. from user
    }
    printf("enter window size :");                       //getting window size
    scanf("%d",&k);

    int b[k];                                             //declareing subarray
    
    for(i=0;i<k;i++)
    {
        rear=rear+1;                                        //enqueuing element in subarray until full
        b[rear]=a[i];
        
    }
    
    for(i=rear;i<size;i++)                                  //here we use circular queue for maintaining the subarray 
    {
        j=front;                                            //copying front for maintain sequence
        do
        {
            flag=0;                                         //declaring flag as zero for every window
            if(b[front]<0)
            {
            flag=b[front];                              //if negative no. is found then flag modified and break the loop
                
                break;
            }
            front=(front+1)%k;
        }while(front!=(rear+1)%k);
        printf("%d\t",flag);                                //if there is no any -ve no. then it print 0 otherwise that modified no.
        
        front=(j+1)%k;                                      //dequeue element from subarray
       
        rear=(rear+1)%k;                                    //enqueue next element in subarray
        b[rear]=a[i+1];
        
    }

}

