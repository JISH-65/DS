 
#include<stdio.h>
#include<string.h>
char oper[100],numb[100];
int top=-1,top1=-1;
char str[100];
int priority(char n)
{
    if(n=='*' || n=='/')
    {
        return(2);
    }
    else if(n=='+' || n=='-')
    {
        return(1);
    }
    else
    {
        return(0);
    }
}

void push(char n)
{
    oper[++top]=n;

}
char display(char a)
{
    numb[top1++]=a;
}

int main()
{
    int i;
    char *ele;
    printf("\nEnter the infix expression:\t");
    scanf("%s",str);
    strrev(str);
    ele=str;
    printf("\nprefix expression is:\t");
    while(*ele!='\0')
    {
        if(isalnum(*ele)||isalpha(*ele))
        {
            display(*ele);
        }
        else
        {
            while(priority(oper[top]) >= priority(*ele))
            {

                while(top>-1)
                {
                    display(oper[top]);
                    top--;
                }

            }
            push(*ele);
        }
        ele++;

    }
    if(top!=-1)
    {
        display(oper[top]);
        top--;
    }

    for(i=top1; i>=-1; i--)
    {
        printf("%c",numb[i]);
    }

}
