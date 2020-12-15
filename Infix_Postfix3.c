//Infix to postfix // try 3
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char stack[100],postfix[100];
 int top = -1 , tp = -1 ;

void push_into_stack(char a);
void push_into_postfix(char a);
 int precedence(char a);

void main()
{
    char exp[100];
    printf("Please entr your infix expression : ");
    scanf("%s",&exp);
    int n = strlen(exp);

    exp[n] = ')'; // no need to increase size
    push_into_stack('(');
    
    for(int i=0;i<=n;i++)
    {   
        switch(exp[i])
        {
            case '(':
                push_into_stack(exp[i]);
                break;
            case '^':
            case '/':
            case '*':
            case '+':
            case '-':
            {   //operator
                //printf("checking precedence :)\n");
                if( precedence(exp[i]) > precedence(stack[top]) )  // compare exp[i] with stack[top]
                    push_into_stack(exp[i]);
                else 
                {   // low precedence ,means we need to exchange
                    push_into_postfix(stack[top]);
                    stack[top] = exp[i]; // pushed //or u can say replaced 
                }
                break;
            }
            case ')': 
            {   //start popping
                while(stack[top] != '(')
                {   //push_into_postfix and pop_from_stack // stack k top ko
                    push_into_postfix(stack[top]);
                    top = top - 1;
                }
                top = top - 1; // pop '('  from stack
                break;
            }
            default:
            {   //alphabet or number 
                push_into_postfix(exp[i]);
                break;
            }
        }

    }
    // while(stack[top] != '(')
    // {
    //    push_into_postfix(stack[top]);
    //    top = top - 1;
    // }
    printf("\nyour postfix expression is : %s\n",postfix);
}
/*--------------------------------------------------*/
void push_into_stack(char a)
{
    top++;
    stack[top]=a;
}

void push_into_postfix(char a)
{
    tp++;
    postfix[tp]=a;
}

int precedence(char a) // checking if exp[i] has higher precedence
{   
    switch(a)
    {
        case '^':
            return 2;
        case '/':
        case '*':
            return 1;
        case '+':
        case '-':
            return 0;
        default:
            return -1;
    }
}

