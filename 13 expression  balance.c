 
#include<stdio.h>
char stack[100];
int top=-1,flag=0;
void push(char a)
{
    stack[++top]=a;
}
char pop()
{
    stack[top--];
}

int main()
{
    char str[1000],*e;
    printf("\nEnter the eapresion:\t");
    scanf("%s",&str);
    e=str;
    while(*e!='\0')
    {
        if(*e=='{'||*e=='['||*e=='(')
        {
            push(*e);
        }
        else
        {
            if(stack[top]=='{')
            {
                if(*e=='}')
                {
                    pop();

                }
                else
                {
                    printf("Eapression is Unbalanced\t");
                    flag=1;
                    break;
                }
            }
            else if(stack[top]=='[')
            {
                if(*e==']')
                {
                    pop();

                }
                else
                {
                    printf("Eapression is Unbalanced");
                    flag=1;
                    break;
                }

            }
            else if(stack[top]=='(')
            {
                if(*e==')')
                {
                    pop();

                }
                else
                {
                    printf("Eapression is Unbalanced");
                    flag=1;  
                    break;
                }
            }
            else
            {
                printf("Eapression is Unbalanced");
                flag=1;
                break;
            }
        }
        e++;

    }

    if(top==-1 && *e=='\0'&& flag==0)
    {
        printf("Eapression is balanced");
    }
    if(top>=0 && flag==0)
    {
        printf("Eapression is Unbalanced");
    }

}
