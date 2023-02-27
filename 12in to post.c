 

#include<stdio.h>
char stack[100];
int top = -1;
void push(char n)
{
    stack[++top] = n;
}

char pop()
{
    if(top==-1)
    {
        return -1;
    }
    else
    {
        return stack[top--];
    }
}

int priority(char n)
{

    if(n=='+' || n=='-')
    {
        return 1;
    }
    if(n=='*' || n=='/')
    {
        return 2;
    }
    return 0;
}

int main()
{
    char str[100];
    char *ele,n;
    printf("Enter the expression : ");
    scanf("%s",str);
    printf("\n");
    ele = str;

    printf("Postfix expression is  :");
    while(*ele!='\0')
    {
        if(isalnum(*ele)||isalpha(*ele))
            printf("%c ",*ele);

        else
        {
            while(priority(stack[top]) >= priority(*ele))
            {
                printf("%c ",pop());
            }

            push(*ele);
        }
        ele++;
    }

    while(top != -1)
    {
        printf("%c ",pop());
    }
    return 0;

}
