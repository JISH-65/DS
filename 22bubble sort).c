 

#include<stdio.h>
int main()
{
	int a[100],i,j,n,temp;
	printf("enter the no of elements to be sorted\n");
	scanf("%d",&n);
	printf("enter the numbers:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)	//because n-i-1 will give you 1 less iterations each time 
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("sorted list is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	return 0;
}
