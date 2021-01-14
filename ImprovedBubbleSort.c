/*
 *Improved-Bubble-Sort
 */
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
const int n=8;
void bubbleSort(int arr[],int n)
{
    int count = 1; 
    //sorting using bubble sort :)
    do
    {   
        count = 0;
        for (int i = 0; i < n-1; i++)  //
        {
            if (arr[i] > arr[i + 1])
            {   // swapping
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;

                count++;
            }
        }
    }while(count != 0);
   
}
void printArray(int arr[],int n)
{
    printf("\nHere is ur list :  \n");
    for (int i = 0; i < n; i++)
    {
        printf("\n %d",arr[i]);
    }
    printf("\n");

}


int main()
{
    int arr[n],lower=0,upper=100;
    printf("\nHere is unsorted numbners\n");
    srand(time(0)); 
    for(int i=0;i<n;i++)
    {
        int num = (rand() % (upper-lower +1)) + lower;
        arr[i]=num; 
        printf("\n %d",num);
    }
    printf("\n");
    bubbleSort(arr,n);
    printf("ur list after bibble sort  : \n");
    printArray(arr,n);
    
    return 0;
}