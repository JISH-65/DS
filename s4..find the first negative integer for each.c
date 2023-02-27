 
#include<stdio.h>
int num,i,j,k;
int a[51];
int flag=0;
int front=0,rear=-1;


int main()
{
    printf("How many numbers are you going to enter: \n");      
    scanf("%d",&num);
    printf("Enter the numbers: ",num); 
	printf("\n(NOTE : Here you should enter positive and negativce numbers)\n");   
    for(i=0;i<num;i++)
   		 {
    	    scanf("%d",&a[i]);                              
   		 }
    	 printf("enter window size :");                      
   		 scanf("%d",&k);

   	 int b[k];                                             
    
   		 for(i=0;i<k;i++)
   		 {
    	    rear=rear+1;                                        
     	   b[rear]=a[i];
        
	     }
		 printf("____________________________________________________\n");
		 	printf("The answer is: \n");
   		 for(i=rear;i<num;i++)                                
  	      {
     	   j=front;                                          
      	     do
       		 {
        	    flag=0;                                        
         	   if(b[front]<0)
         	   {
           	     flag=b[front];                             
                
           	     break;
          	   }
         		   front=(front+1)%k;
      	    }while(front!=(rear+1)%k);
      	
			 printf("%d\t",flag); 

        	front=(j+1)%k;                                    
       
      		  rear=(rear+1)%k;                                 
       		 b[rear]=a[i+1];
        
            }
            printf("\n____________________________________________________\n");
}
