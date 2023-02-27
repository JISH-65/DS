

#include<stdio.h>
#include<string.h>
#include<math.h>   
int stack[20],top=-1;
int ch;
void push(char y)
{                                  
	stack[++top]=y;
}
int pop()
{
	ch=stack[top];
	top--;
	return ch;
}


int main()
{
	char str[100],ele,*e;
	int num1,num2,result;
	printf("Enter the postfix expression:\t");
	scanf("%s",str);
	e=str;
	while(*e!='\0')
	{
		if(*e>'0'&&*e<'9')
		{
           push(*e-'0');
			    
		}
		else
		{
			num1=pop();
			num2=pop();
			switch(*e)
			{
				case '+':
					result=num1+num2;
				break;
				case '-':
					result=num1-num2;
				break;
				case '*':
					result=num2*num1;
				break;
				case '/':
					result=num2/num1;
				break;
			}
			push(result);
		}
		
		e++;
	}
	printf("\nEvalution of expresion:\t%d",pop());
}
