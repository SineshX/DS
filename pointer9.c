//WAP to store n elements in an array ,
//and print the elements using pointers.
#include<stdio.h>

int main()
{   
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Please enter integers in array \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int *p1;
    p1 = &a[0];
    printf("printing array using pointers\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",*p1);
        p1 = p1+1;
        //+4 will be increased in hexdecimal address(pointer)
    }   
    printf("\n");
    return 0;
}