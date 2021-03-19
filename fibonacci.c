#include<stdio.h>
#include<stdlib.h>

long int fibo(int n);
int main()
{   
    system("cls");
    int n;
    printf("\nHow many fibonacci numbers do u wanna print : ");
    scanf("%d",&n);
    printf("here is fibonacci series : \n");
    
    for(int i=0;i<n;i++)
    {
        printf("%d\n",fibo(i)); //will go upto fibo(n-1)
    }
    // printf("%d\n",fibo(4));
      // will give 5th element = 3 // coz it starts from 0
    return 0;
}
/**************************/
long int fibo(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return (fibo(n-1)+fibo(n-2));
}