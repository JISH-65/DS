 

#include<stdio.h>
int n,i;
void mergesort();
void merge();
int main()
{
	printf("enter the no. of elements to be sorted:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("entered list is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	mergesort(a,0,n-1);			//function for dividing the problem into smaller parts and merged after division
	printf("\nsorted list is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
void mergesort(int a[],int low,int high)
{
	int mid;
	if(low!=high)
	{
		mid=(low+high)/2;		
		mergesort(a,low,mid);		//function for dividing the left part
		mergesort(a,mid+1,high);	//function for dividing the right part
		merge(a,low,mid,high);		//merging the array with sorting
	}
}
void merge(int a[n],int low,int mid,int high)
{	
	int b[n],p;
	int k=low;
	int j=mid+1;
	i=low;
		while(i<=mid&&j<=high)
		{
			if(a[i]<a[j])
			{
				b[k]=a[i];
				i++;
			}
			else
			{
				b[k]=a[j];
				j++;
			}
			k++;
		}
		
			if(j>high)
			{
				for(p=i;p<=mid;p++)
				{
					b[k]=a[p];
					k++;
				}
			}
			else	//i>mid
			{
				for(p=j;p<=high;p++)
				{
					b[k]=a[p];
					k++;
				}
			}
			for(p=low;p<=high;p++)
			{
				a[p]=b[p];			//switching sorted liast from temp array to main array
			}
		
}
