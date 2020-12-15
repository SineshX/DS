
#include<stdbool.h>
#include<stdio.h>

int queue[100]; 
int front=-1,rear=-1;
int n=3;

void enqueqe(int a);
void dequeqe();
void printQueue();

void main()
{   
    int ch,data;
    bool inloop = true;
    while(inloop) //is safer for nuclear plant than while(true) :)
    {
        printf("\nTo Enqueue press 1\nTo Dequeue press 2\nTo PrintQueue prese 3");
        printf("\nTo Exit press 0\nYour choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 0:
                inloop = false;
                break;
            case 1:
            {
                printf("Enter Data of node : ");
                scanf("%d",&data);
                enqueqe(data);
                break;
            }
            case 2:
            {
                dequeqe();
                break;
            }
            case 3:
                printQueue();
                break;
            default :
            {
                printf(" # ! Bad Choice ! #\n");
                inloop = false;
            }
        }
        //printQueue();
        
    }
    return;
}
/****************************************************/
void enqueqe(int a) //  insertion
{
    if(front == -1 && rear == -1) 
    {  
        front = 0;
        rear = 0;
        queue[rear] = a;
        return;
    }
    
    if((rear+1)%n == front ) //remainder = front              // 
    {  
        printf("\nQueue Overflow ~:-:~ (i.e. Queue Full)\n");  
    }
    else
    {   
        rear = ((rear+1) % n);
        queue[rear] = a;
        //printf("added :  queue[%d] = %d",rear,queue[rear]);
    }
    return;
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
        front = ((front + 1)%n);
        printf("You Deleted %d\n",x);
    }
    return;
}
void printQueue()
{   
    int i = front;
    if(i == -1)
    {
        printf("Queue is empty!");
    }else{
            printf("\nHere is your Queue :  ");
            while( i != rear )
            {   
                printf("%d\t",queue[i]);
                i = ((i+1)%n);
                // printf("i=%d , rear=%d\t",i,rear);
            }
            if(i == rear)
                printf("%d",queue[i]);
        
    }
    return;
}
/*
// OUTPUT : 

To Enqueue press 1   
To Dequeue press 2   
To PrintQueue prese 3
To Exit press 0
Your choice : 1
Enter Data of node : 100

To Enqueue press 1   
To Dequeue press 2   
To PrintQueue prese 3
To Exit press 0      
Your choice : 1      
Enter Data of node : 200

To Enqueue press 1
To Dequeue press 2
To PrintQueue prese 3
To Exit press 0
Your choice : 1
Enter Data of node : 300

To Enqueue press 1
To Dequeue press 2
To PrintQueue prese 3
To Exit press 0
Your choice : 1
Enter Data of node : 400

Queue Overflow ~:-:~ (i.e. Queue Full)

To Enqueue press 1
To Dequeue press 2
To PrintQueue prese 3
To Exit press 0
Your choice : 3

Here is your Queue :  100       200     300
To Enqueue press 1
To Dequeue press 2
To PrintQueue prese 3
To Exit press 0
Your choice : 2
You Deleted 100

To Enqueue press 1
To Dequeue press 2
To PrintQueue prese 3
To Exit press 0
Your choice : 1
Enter Data of node : 500

To Enqueue press 1
To Dequeue press 2
To PrintQueue prese 3
To Exit press 0
Your choice : 1
Enter Data of node : 600

Queue Overflow ~:-:~ (i.e. Queue Full)

To Enqueue press 1
To Dequeue press 2
To PrintQueue prese 3
To Exit press 0
Your choice : 3

Here is your Queue :  200       300     500
To Enqueue press 1
To Dequeue press 2
To PrintQueue prese 3
To Exit press 0
Your choice : 0
PS D:\Sinesh\code\DS> 

*/