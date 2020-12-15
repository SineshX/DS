
#include<stdio.h>
int queue[100];
int front=-1,rear=-1,n;

void enqueqe(int a);
void dequeqe();
void printQueue();
void main()
{   
    int ch,data;
    printf("How many nodes do you want in ur Queue : ");
    scanf("%d",&n);
    while(1)
    {
        printf("\nTo Enqueue Press 1\nTo Dequeue Press 2\n");
        printf("To Exit press 0\n");
        scanf("%d",&ch);
        if(ch==0)
            break;
        switch(ch)
        {
            case 1:
            {
                printf("Please Enter Data of node : ");
                scanf("%d",&data);
                enqueqe(data);
                break;
            }
            case 2:
            {
                dequeqe();
                break;
            }
        }
        printQueue();
    }
    return;
}
/****************************************************/
void enqueqe(int a)
{
    if(front == -1)
    {
        front = front + 1;
    }
    if(rear == n-1)
    {  
        printf("\nQueue Overflow ~:-:~ (i.e. Queue Full)\n");  
    }
    else
    {
        rear = rear + 1;
        queue[rear] = a;
    }
}

void dequeqe()
{
    if(front == -1)
    {   
        printf("Queue Underflow ~_:_~ (i.e. Queue empty)\n");
        return;
    }
    if(rear == front) //single lelment wala Queue
    {   
        int x = queue[front];
        front = rear = -1;
        printf("You Deleted %d\n",x);
    }
    else
    {   
        int x = queue[front];
        front = front + 1;
        ;
        printf("You Deleted %d\n",x);
    }
    return;
}
void printQueue()
{   
    printf("\nHere is your Queue :  ");
    int i = front;
    while(i<=rear)
    {
        printf("%d\t",queue[i]);
        i = i+1;
    }
    return;
}
/*
// OUTPUT : 
How many nodes do you want in ur Queue : 3

To Enqueue Press 1
To Dequeue Press 2
To Exit press 0   
1
Please Enter Data of node : 12

Here is your Queue :  12
To Enqueue Press 1      
To Dequeue Press 2      
To Exit press 0
1
Please Enter Data of node : 123

Here is your Queue :  12        123
To Enqueue Press 1
To Dequeue Press 2
To Exit press 0
1
Please Enter Data of node : 1233

Here is your Queue :  12        123     1233
To Enqueue Press 1
To Dequeue Press 2
To Exit press 0
1
Please Enter Data of node : 123

Queue Overflow ~:-:~ (i.e. Queue Full)

Here is your Queue :  12        123     1233
To Enqueue Press 1
To Dequeue Press 2
To Exit press 0
2
You Deleted 12

Here is your Queue :  123       1233
To Enqueue Press 1
To Dequeue Press 2
To Exit press 0
2
You Deleted 123

Here is your Queue :  1233
To Enqueue Press 1
To Dequeue Press 2
To Exit press 0
2
You Deleted 1233

Here is your Queue :  0
To Enqueue Press 1
To Dequeue Press 2
To Exit press 0
2
Queue Underflow ~_:_~ (i.e. Queue empty)

Here is your Queue :  0
To Enqueue Press 1
To Dequeue Press 2
To Exit press 0
0

*/