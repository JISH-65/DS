/*
NAME : 1.Ganesh Kende
	   2.Sakshi Shinde
	   
	   TITLE : miniproject (chinky and diamonds ).
*/
#include<stdio.h>
int main()
{
	int N,i,K,j,k,x,temp;

	printf("enter the number of bags:\n");
	scanf("%d",&N);
	int a[N];
	printf("enter the diamonds in each bag:\n");
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("_____________________________________________________________________________________________________________________\nenter the no of time given to choose the bag:");
	scanf("%d",&K);
	if(K==0)
	{
   	 printf("zero diamonds choosen\n");
	}
	while(K>0)
	{
		x=0;
		while(K>0)
		{
			for(j=0;j<N-1;j++)
			{
				for(i=0;i<N-j-1;i++)
				{
					if(a[i]>a[i+1])
					{
						temp=a[i+1];
						a[i+1]=a[i];
						a[i]=temp;
					}
				}
			}
		x=x+a[N-1];
		a[N-1]=a[N-1]/2;
		K--;
		}
		printf("\ntotal number of diamonds to be selected are: %d\n___________________________________________________________________________________________________________________\n",x);
	}
	if(K<0)
	{
		printf("time entered invalid:\n");
	}
	return 0;
}
