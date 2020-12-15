//Stack using Linked list 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int myrandom();
void mystack();
void printStack();
void manualStack();
void myPop();
void myPush();
typedef struct node
{
    int data;
    struct node *next;

}box;
box *top,*tp;
const int n;
int count;

int main(void)
{   
    printf("How many node do you wanna create : ");
    scanf("%d",&n);
    srand(time(0));
    manualStack(n);
    //mystack(n); //automatic 
    printStack();
    int a;
    while(1)
    {
        printf("\nTo Pop  item (delete top) press 1,");
        printf("\nTo Push item (insert top) press 2,");
        printf("\nTo Exit press 0,\n");
        scanf("%d",&a);
        if(a==0)
        {
            break;
        } 
        switch(a)
        {
            case 1:
            {   
                if(top==NULL)
                {
                    printf("\nStack Underflow :_: Empty Stack\n\n");
                    break;
                }
                myPop();
                break;
            }
            case 2:
            {   
                if(count==n)
                {
                    printf("\nStack Overflow ;_; Limit reached\n\n");
                    break;
                }
                myPush();
                break;
            }
        }
        printStack();
    } //end of while loop
    return 0;
}

int myrandom()
{   int lower=0,upper=100,num;
    // srand(time(0));
    num = (rand() % (upper-lower +1)) + lower;
    return num;
}

void mystack()
{
    tp = NULL;
    for(int i=0;i<n;i++)
    {
        top = (box*)malloc(sizeof(box));
        top->data= myrandom();
        top->next=tp;
        tp = top;
    }
}

void printStack()
{   
    count = 0;
    printf("Elememts of the Stack are : ");
    tp = top;
    while(tp!=NULL)
    {   
        count = count+1;
        printf("%d\t",tp->data);
        tp = tp->next;
    }

}

void manualStack()
{   int a;
    tp = NULL;
    for(int i=0;i<n;i++)
    {   
        printf("Please Enter The data of node %d : ",i+1);
        scanf("%d",&a);
        top = (box*)malloc(sizeof(box));
        top->data= a;
        top->next=tp;
        tp = top;
    } 
}

void myPop()
{
    tp = top;
    top = tp->next;
    printf("you poped %d\n",tp->data);
    free(tp);
}

void myPush()
{
    int a;
    tp = top;  
    printf("Enter The data of top node : ");
    scanf("%d",&a);
    top = (box*)malloc(sizeof(box));
    top->data= a;
    top->next=tp;
}

/* Output : 
How many node do you wanna create : 6
Please Enter The data of node 1 : 110
Please Enter The data of node 2 : 20
Please Enter The data of node 3 : 30
Please Enter The data of node 4 : 43
Please Enter The data of node 5 : 54
Please Enter The data of node 6 : 65
Elememts of the Stack are : 65  54      43      30      20      110
To Pop  item (delete top) press 1,
To Push item (insert top) press 2,
To Exit press 0,
1
you poped 65
Elememts of the Stack are : 54  43      30      20      110
To Pop  item (delete top) press 1,
To Push item (insert top) press 2,
To Exit press 0,
2
Enter The data of top node : 111
Elememts of the Stack are : 111 54      43      30      20      110
To Pop  item (delete top) press 1,
To Push item (insert top) press 2,
To Exit press 0,
0
PS C:\Users\DCIIT\Desktop\CSE\sem3\DS>

*/