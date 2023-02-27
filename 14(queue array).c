 

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[5],front=-1,rear=-1,ch;
	do
	{
		printf("\nenter your choice:\n");
		printf("1.enqueue\n2.dequeue\n3.traverse\n4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1://enqueue
				{
					if(rear==4)
					{
						printf("queue overflow.\n");
					}
					else
					{
						if(front==-1)
						{
							front=front+1;
							rear=rear+1;
							printf("enter the data:\t");
							scanf("%d",&a[rear]);	
						}
						else
						{
							rear=rear+1;
							printf("enter the data:\t");
							scanf("%d",&a[rear]);	
						}	
					}
				}
			break;
			case 2://dequeue
				{
					if(front==-1)
					{
						printf("queue is underflow..!\n");
					}
					else
					{
						printf("%d is dequeued\n",a[front]);
						front=front+1;
						if(front>rear)
						{
							front=-1;
							rear=-1;
						}
					}
				}
			break;
			case 3://traverse
				{
					if(front==-1)
					{
						printf("queue is empty..!\n");
					}
					else
					{	
						printf("data in the queue is :\t");
						for(i=front;i<=rear;i++)
						{
							printf("%d\t",a[i]);
						}
					}
				}
			break;
			case 4://exit
				{
					
				}
			break;
			default:
				{
					printf("invalid choice..!\n");
				}
		}
	}
	while(ch!=4);
}
