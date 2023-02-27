 
#include<stdio.h>
int main()
{
	int q[5],front=-1,rear=-1,i,ch;
	do
	{
		printf("\nenter the choice:");
		printf("\n1.enqueue\n2.dequeue\n3.traverse\n4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1://enqueue
			{
				if(front==(rear+1)%5)
				{
					printf("\nqueue overflow..!");
				}
				else
				{
					if(front==-1)
					{
						front=front+1;
						rear=rear+1;
					}
					else
					{
						rear=(rear+1)%5;
					}
					printf("\nenter the data:");
					scanf("%d",&q[rear]);
				}
			}
			break;
			case 2://dequeue
			{
				if(front==-1)
				{
					printf("\nqueue underflow..!");
				}
				else
				{
					printf("\n%d is deueued",q[front]);
					front=(front+1)%5;
					if(front==(rear+1)%5)
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
					printf("\nqueue is empty..!");
				}
				else
				{
					printf("\ndata is:");
					/*do
					{
						printf("%d\t",q[front]);
						front=(front+1)%5;
					}
					while(front!=(rear+1)%5);*/
					
					int r;//here r is to be taken because if we use above commented logic the front will always come at index 0 and if we traverse then even value at index 0 is dequeueed then to the front  will not be on its original place but it will on index 0 always. 
					r=front;//so we assign a new variable for front and work on code using that  variable.
					do
					{
						printf("%d\t",q[r]);
						r=(r+1)%5;
					}
					while(r!=(rear+1)%5);
					
				}
			}
			break;
			case 4://exit
			break;
			default:
			{
				printf("\ninvalid choice...!");
			}
		}
		
	}
	while(ch!=4);
	return 0;
}
