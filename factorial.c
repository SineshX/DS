#include<stdio.h>
int f;
int fact(int n)
{
    if(n==0) // base criteria
        f = 1; //stopping at base criteria
    else
        f = n*fact(n-1);
    return f;
}
int main()
{
    printf("\n%d\n",fact(4));
}