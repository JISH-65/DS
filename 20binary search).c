 
#include<stdio.h>
int main()
{
	int i,key,flag=0,low=0,high=9,mid,a[10];
	printf("enter the set of elements :\n");
	for(i=0;i<11;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched:");
	scanf("%d",&key);
			
		while(low<=high)
		{
			mid=(low+high)/2;
			if(key==a[mid])
			{
				flag=1;
				break;
			}
			else if(key<a[mid])
			{
				high=mid-1;
			}
			else
			{
				low=mid+1;
			}
		}
		if(flag==1)
		{
			printf("search successful location is %d",mid+1);
		}
		else
		{
			printf("search unsuccessful..!!");
		}
}
