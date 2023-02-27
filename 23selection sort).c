 
#include<stdio.h>
int main()
{
	int a[100],n,i,temp,j,min;
	printf("enter the number of elements to be sorted:\n");
	scanf("%d",&n);
	printf("enter the numbers:\n");
	for(i=0;i<n;i++)		
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)	//no of iterations should be one number less the the no of elements,as while sorting or moving the smallest element towards left ,during last iterarion last number i.e largest no. will be by default sorted.
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(i!=min) //if the number  is present at the location where it should be, then the swapping will  not occur.
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	printf("sorted list is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
