 

#include<stdio.h>
struct queue
{
	int data;
	int p_no;
};
int main()
{
	struct queue q[5];											//creating obj i.e queue array of 5 elements
	int i,j,ch,data,p_no,front=-1,rear=-1,tempp,tempd;				//tempp=for storing temp priiority no
																	//tempd=for storing temp data of that prior no.
	do
	{
		printf("\nenter your choice..");
		printf("\n1.enqueue\n2.traverse\n3.dequeue\n4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1://enqueue
			{
				if(front==-1)
				{
					front=front+1;
					rear=rear+1;
					printf("\nenter the data");
					scanf("%d",&q[rear].data);
					printf("\nenter the priority");
					scanf("%d",&q[rear].p_no);
				}
				else
				{
					if(rear==4)
					{
						printf("\nqueue overflow..!");
					}
					else
					{
						rear=rear+1;
						printf("\nenter the data");
						scanf("%d",&q[rear].data);			//scanning the data from usert
						printf("\nenter the priority");
						scanf("%d",&q[rear].p_no);	 		//scanning the prior no from user
					}
				}
				////sorting __________logic of insertion sort.here sorting is by default simultaneously while enqueuing.
				{
					for(i=front+1;i<=rear;i++)		//instead we can take i=1;1<5;i++ as given in insertion sort but by takiing it,
													//for loop will work always for all 5 index even if the rear or last element is at index 2 or 3 i.e <5
					{
						tempp=q[i].p_no;			//PRIOR NO AT INDEX I
						tempd=q[i].data;			//DATA AT INDEX I
						j=i-1;
						while(tempp<q[j].p_no&&j>=0)
						{
							q[j+1].p_no=q[j].p_no;
							q[j+1].data=q[j].data;
							j--;
						}
						q[j+1].p_no=tempp;
						q[j+1].data=tempd;
					}				
				}
			}
			break;
			case 2://traverse
			{
				if(front==-1)
				{
					printf("\nqueue empty..!");
				}
				else
				{
					printf("\ndata is:\n");
					for(i=front;i<=rear;i++)
					{
						printf("data:%d   priority:%d  ",q[i].data,q[i].p_no);	//q[i].data  = data at index i
																				//q[i].p_no  = prior no at index i
					}
				}
			}
			break;
			case 3://dequeuing
			{
				if(front==-1)
				{
					printf("\nqueue underflow...!");
				}
				else
				{
					printf("\n%d data  having priority %d is dequeued",q[front].data,q[front].p_no);
					front=front+1;	
					if(front>rear)//queue will be empty
					{
						front=-1;
						rear=-1;
					}
				}
			}
			case 4://exit
			{
				
			}
			break;
			default:
			{
				printf("\ninvalid choice..!");
			}
		}
	}
	while(ch!=4);
	return 0;
}
