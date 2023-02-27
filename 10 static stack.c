 

#include<stdio.h>
int main()
{
	int a[5],i,ch,top=-1;
	
	do
	{
		printf("enter your choice:\n");
		printf("1.push\n2.pop\n3.top of stack\n4.traverse\n5.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1://pushing
				{
					if(top==4)
					{
						printf("stack is overflow..!\n");
					}
					else
					{
						top=top+1;
						printf("enter the data:");
						scanf("%d",&a[top]);
					}
				}
			break;
			case 2://popping
				{
					if(top==-1)
					{
						printf("stack underflow..!\n");
						
					}
					else
					{
						printf("%d is popped.\n",a[top]);
						top=top-1;
					}
				}
			break;
			case 3://top of the stack
				{
					if(top==-1)
					{
						printf("stack is empty..!\n");
					}
					else
					{
						printf("%d is top of stack.\n",a[top]);
					}
				}
			break;
			case 4://traverse
				{
					if(top==-1)
					{
						printf("stack is empty..!\n");
					}
					else
					{	
						for(i=0;i<=top;i++)
						{
							printf("%d\t",a[i]);
						}
					}
					
				}
			break;
			case 5://exitting
				{
					//exitting
				}
			break;
			default:
				{
					printf("invalid choice.\n");
				}
		}
		
	}
	while(ch!=5);
}
