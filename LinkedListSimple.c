// Write code for following operations on Single linked list,
// #  a Create Linked List
// 1. Insert a node at the beginning of Linked list
// 2. Insert a node at the end of Linked List
// 3. Insert a node in the middle of the linked list
// 4. Delete a node at the beginning  of linked list
// 5. Delete a node at the end of linked list
// 6. Delete a node in the middle of linked list
// Write menu driven program for Single linked list for above said operations.
// All above said operations need to be implemented with the help of functions.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int a;  
int myrandom();
struct node printList();
struct node insertBeg();
struct node insertEnd();
struct node insertMid();
struct node deleteBeg();
struct node deleteEnd();
struct node deleteMid();
struct node myLL(int  length);

typedef struct node
{
    int data;
    struct node *next;
}box;
box *head,*ptr,*ptr2; 

int main()
{   
    printf("Automatic data will be feeded for initial nodes\n");
    printf("How many node do you wanna crreate ? : ");
    scanf("%d",&a);
    srand(time(0));
    myLL(a);
    printList();
    //menu driven program for Single linked list :)
        while (1)
        {   
            //printf("\nPlease Enter Correct option  :) ");
            printf("\nTo insert at the beginning  press 1,");
            printf("\nTo insert at the end        press 2,");
            printf("\nTo insert at given position press 3,");
            printf("\nTo delete at the beginning  press 4,");
            printf("\nTo delete at the end        press 5,");
            printf("\nTo delete at given position press 6,");
            printf("\nTo exit press 0 :)\n");
            scanf("%d",&a);
            if(a==0){
                break;
            }
            switch(a)
            {
                case 1:
                {
                    insertBeg();
                    break;
                }
                case 2:
                {
                    insertEnd();
                    break;
                }
                case 3:
                {
                    insertMid();
                    break;
                }
                case 4:
                {
                    deleteBeg();
                    break;
                }
                case 5:
                {
                    deleteEnd();
                    break;
                }
                case 6:
                {
                    deleteMid();
                    break;
                }
                // default:
                // {
                //     continue;
                // }
            }
            printList();
        }//end of while loop
    //completed
    printList();
    return 0;
}

struct node myLL(int  length)
{   
    head = (box*)malloc(sizeof(box));
    head->data = myrandom();
    head->next=NULL;
    ptr = head;
    for(int i=1;i<length;i++)
    {
        ptr2 = (box*)malloc(sizeof(box));
        ptr2->data = myrandom();
        ptr2->next = NULL;
        ptr->next = ptr2;
        ptr = ptr->next;
    }
    //return *head;
}


int myrandom()
{   int lower=0,upper=100,num;
    // srand(time(0));
    num = (rand() % (upper-lower +1)) + lower;
    return num;
}

struct node printList()
{   
    ptr = head;
    printf("here is your linkedlist : ");
    while(ptr != NULL)
        {   
            printf(" %d\t",ptr->data);
            ptr = ptr->next ;
        }
    //return *head;
}


struct node insertBeg() //1
{   
    printf("Enter the data head of node : ");
    scanf("%d",&a);
    ptr = (box*)malloc(sizeof(box));
    ptr->data= a;
    ptr->next=head;
    head = ptr;
    //return *head;
}

struct node insertEnd() //2
{
    printf("Enter the data last of node : ");
    scanf("%d",&a);
    ptr = head;
    while(ptr->next !=NULL)
    {
      ptr = ptr->next;
    }
    ptr2 = (box*)malloc(sizeof(box));
    ptr2->data = a;
    ptr2->next = NULL;
    ptr->next = ptr2;
    //return *head;
}

struct node insertMid() //3
{   int p;
    printf("Enter the position of new node: ");
    scanf("%d",&p);
    if (p==1)
    {
        insertBeg();
    }
    else
    {
        printf("Enter the data of node : ");
        scanf("%d",&a);
        // to reach at one pre box of which to be inserted XD
        ptr = head;
        for(int i=1;i<p-1;i++)
        {
            ptr = ptr->next;
        }
        ptr2 = (box*)malloc(sizeof(box));
        ptr2->data = a;
        ptr2->next = ptr->next;
        ptr->next = ptr2;
    }
    //return *head;
}

struct node deleteBeg() //4
{
    ptr = head;
    head = ptr->next;
    free(ptr);
}

struct node deleteEnd() //5
{
    ptr = head;
    while(ptr->next !=NULL)
    { 
      ptr2 = ptr; //since we need one previous node
      ptr = ptr->next; //it will be the end node ,
    }
    ptr2->next = NULL;
    free(ptr);
}

struct node deleteMid() //6
{
    int p;
    printf("Enter the position of node to delete ");
    scanf("%d",&p);
    if (p==1)
    {
        deleteBeg();
    }
    else
    {
        // to reach at one pre box of which to be deleted XD
        ptr = head;
        for(int i=1;i<p-1;i++)
        {
            ptr = ptr->next;
        }
        ptr2 = ptr->next;
        ptr->next = ptr2->next; //next k next wala kaam nahi kiya 
        free(ptr2);
    }
}



