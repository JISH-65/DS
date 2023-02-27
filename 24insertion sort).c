 
#include<stdio.h>
int main()
{
	int a[100],n,i,j,temp;
	printf("enter the no. of elements to be sorted:\n");
	scanf("%d",&n);
	printf("enter the numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(temp<a[j]&&j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("sorted list is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
