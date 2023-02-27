 
#include<stdio.h>
void sort();
int main()
{
	int i,j,n,temp,pivot;
	printf("enter the no of elements to be sorted\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the numbers:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("entered numbers are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	sort(a,0,n-1);				//calling of the function of quick sort.
	printf("\nsorted list of numbers are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
void sort(int a[],int low,int high)
{
	int i,j,temp,pivot;
	if(low<high)
	{
		pivot=low;		//taking the first element as pivot element
		i=low;
		j=high;
		while(i<j)
		{
			while(a[i]<=a[pivot]&&i<high)
			{
				i++;		
			}
			while(a[j]>a[pivot])
			{
				j--;
			}
			if(i<j)		//ifi<j then swapping the values.
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	temp=a[j];				//logic for swapping pivot element and j's element
	a[j]=a[pivot];
	a[pivot]=temp;
	
	sort(a,low,j-1);		//changing values of high to j-1 by recursive calling of function.
	sort(a,j+1,high);		//changing value of low to j+1 by recursion
	}
}
