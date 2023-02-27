 


#include<stdio.h>
int main()
{
	int a[1000],low=0,mid,high=99,ans,ans1;
	mid=(low+high)/2;
	printf("choose the number between 1 to 100\n\n");
	while(low<=high)
	{
		mid=(low+high)/2;
		
		printf("is the number is your mind is %d\n1.yes\t2.no\n",mid);
		scanf("%d",&ans);
		if(ans==1)
		{
			printf("search successful..!");
			break;
		}	
		else if(ans==2)
		{
			printf(" is the no. in the mind greater\n1.yes\t2.no\n");
			scanf("%d",&ans1);
		
			if(ans1==1)
			{
				low=mid+1;
			}
			else if(ans1==2)
			{
				high=mid-1;
			}
			else
			{
				printf("invalid choice..!\n");
			}
		}
		else
		{
			printf("invalid choice..!\n");
		}
	}
}
