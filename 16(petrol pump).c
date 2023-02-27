 
#include<stdio.h>
struct queue
{
	int p;
	int d;
}q[10];
int main()
{ 
int i,n;
int start=0;
int extrafuel=0;
int reqfuel=0;
printf("\nenter no of petrol pump:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("\nenter the petrol and distance:\n");
	scanf("%d %d",&q[i].p,&q[i].d);
}

	for(i=0;i<n;i++)
	{
		extrafuel+=(q[i].p-q[i].d);
		if(extrafuel<0)
		{
			start=i+1;
			reqfuel+=extrafuel;
			extrafuel=0;
		}
    }
    if(reqfuel+extrafuel>0)
    {
     printf(" the start point should be index %d",start);
    }
    else
    {
    printf("\n no location");
    }

return 0;
}

