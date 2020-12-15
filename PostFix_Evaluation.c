#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
#include<math.h>

char stack[10];
int top= -1,n;
long int A,B;
void push(long int a);
int pop2elememt();

int main(void)
{   
    char exp[100];
    printf("please Enter postfix expression : "); // example = 
    scanf("%s",&exp);
    n = strlen(exp);
    for(int i=0;i<n;i++)
    {
        switch(exp[i])
        {
            case '0':
                push(0);
                break;
            case '1':
                push(1);
                break;
            case '2':
                push(2);
                break;
            case '3':
                push(3);
                break;
            case '4':
                push(4);
                break;
            case '5':
                push(5);
                break;
            case '6':
                push(6);
                break;
            case '7':
                push(7);
                break;
            case '8':
                push(8);
                break;
            case '9':
                push(9);
                break;
                // 
            case '^':
            {  
                pop2elememt();
                push(pow(B,A)); //power 
                // printf("%d\n",stack[top]);
                break;
            }
            case '/':
            {  
                pop2elememt();
                push(B/A);
                // printf("%d\n",stack[top]);
                break;
            }
            case '*':
            {  
                pop2elememt();
                push(B*A);
                // printf("%d\n",stack[top]);
                break;
            }
            case '+':
            {  
                pop2elememt();
                push(A+B);
                // printf("%d\n",stack[top]);
                break;
            }
            case '-':
            {  
                pop2elememt();
                push(B-A);
                // printf("%d\n",stack[top]);
                break;
            }
        }
    }
    printf("Value of the expression is %ld\n",stack[top]);
    return 0;
}

/************************************/
void push(long int a)
{   
    if(top+1>n)
    {
        printf("Stack Overflow\n");
        exit(0);
    }
    top = top+1;
    stack[top] = a;
}

int pop2elememt() 
{   
    if(top-2<-1)
    {
        printf("Stack Underflow\n");
        exit(0);
    }
    A = stack[top];
    B = stack[top-1];
    top = top - 2; //pop
    //printf("%d %d \n",A,B);
    return 0;
}
