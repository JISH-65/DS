
#include<stdio.h>
int main()
{
	int i,j,a[10],key,flag=0;
	printf("enter the set of elements:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number to be searched:\n");
	scanf("%d",&key);
	for(j=0;j<10;j++)
	{
		if(key==a[j])
		{
			flag=1;
			break;
		}	
	}
	if(flag==1)
	{
		printf("search successful location is %d",j+1);
	}
	else
	{
		printf("search unsuccessful!!\n");
	}
	return 0;
}
