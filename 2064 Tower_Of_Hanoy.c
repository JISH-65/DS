#include<stdio.h>
void move(int n, char from, char to, char aux)
{
if(n == 1)
{
printf("MOVE DISK 1 FROM %c TO %c",from,to);  //NAME:-JISHAN
return;
}
move (n-1,from,aux,to);
printf("\nMOVE DISK %d FROM %c TO %c",n,from,to);
}                                                   
int main()
{                                           //DIV:-'A'/S4
int n;
scanf("%d",&n);
move(n,'A','C','B');
return 0;
}
//ROLL N.O:- 2064
