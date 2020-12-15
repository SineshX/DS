

#include<stdio.h>
#include<stdlib.h>

void enqueqe(int a);
void dequeqe();
void printQueue();

typedef struct node
{
    int data;
    struct node *next;
}node;
node *front,*rear,*ptr;
int n,count=0;

void main()
{   
    int ch,a;
    printf("How many nodes you want in ur Queue ? : ");
    scanf("%d",&n);
    
    while(1)
    {
        printf("\n1.Enqueue, 2.Dequeqe, 3.Exit\n");
        printf("Please Select your choice : ");
        scanf("%d",&ch);
        if(ch==3)
            break; //out of loop
        switch(ch)
        {
            case 1:
            {
                printf("Please Enter Data of node : ");
                scanf("%d",&a);
                enqueqe(a);
                break;
            }
            case 2:
                dequeqe();
                break;
            default:
                printf("Bad Choice :_: ");
                return;
        }
        printQueue();
    }
    return;
}
/****************************************************/
void enqueqe(int a)
    {   
    if(count==n)
    {
        printf("Queue Overflow ~:-:~ (i.e. Queue Full)\n");
        return;
    }
    if(count == 0)
    {
        ptr = (node*)malloc(sizeof(node));
        ptr->data = a;
        ptr->next = NULL;
        front = ptr;
        rear = ptr;
        count++;
    }
    else
    {   
        ptr = (node*)malloc(sizeof(node));
        ptr->data = a;
        ptr->next = NULL;
        rear->next = ptr;
        rear = ptr;
        count++;
    }
}
void dequeqe()
{
    if(count == 0)
    {   
        printf("Queue Underflow ~_:_~ (i.e. Queue empty)\n");
        return;
    }
    else
    {   
        ptr = front;
        front = front->next;
        printf("You Deleted %d\n",ptr->data);
        free(ptr);
        count--;
    }
}

void printQueue()
{
    ptr = front;
    printf("Here is your Queue : ");
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr = ptr->next;
    }
}
/***********************OUTPUT*****************************/
