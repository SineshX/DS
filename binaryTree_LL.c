//Binary tree using Linked List
#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
    int data;
    struct node *left;
    struct node *right;
}node;
node *root,*lcptr,*rcptr;
void InorderPrint(struct node *root);
void btree(struct node *ptr);
int num;

int main()
{   
    root = (node*)malloc(sizeof(node));
    printf("Enter the data of root node : ");
    scanf("%d",&num);
    root->left = NULL;
    root->right = NULL;
    root->data=num;
    btree(root);
    printf("\nInorder traversal of the binary tree :    ");
    InorderPrint(root);
    return 0;
}
/********************************************/
void btree(struct node *ptr)
{   
    int a;
    if(ptr != NULL)
    {
        //left child
        printf("Do you wanna create left child of (%d)? ,Enter  1 or 0 : ",ptr->data);
        scanf("%d",&a);
        if(a==1)
        {
            lcptr = (node*)malloc(sizeof(node));
            printf("Enter the data for the left child of (%d): ",ptr->data);
            scanf("%d",&num);
            lcptr->data=num;
            ptr->left = lcptr; 
            btree(lcptr);
        }
        else //a =0
        {
            lcptr = NULL;
            ptr->left = NULL;
            btree(lcptr);
        }//End of if

        //right child 
        printf("Do you wanna create right child of (%d)? ,Enter  1 or 0 : ",ptr->data);
        scanf("%d",&a);
        if(a==1)
        {
            rcptr = (node*)malloc(sizeof(node));
            printf("Enter the data for the right child of (%d) : ",ptr->data);
            scanf("%d",&num);
            rcptr->data=num;
            ptr->right = rcptr;
            btree(rcptr);
        }
        else //a =0
        {
            rcptr = NULL;
            ptr->right = NULL;
            btree(rcptr);
        }//End of if
        
    }//End of if

}//End of btree function

void InorderPrint(struct node *ptr)
{   
    if (ptr == NULL)
    {
        return;
    }
    InorderPrint(ptr->left);
    printf("%d\t",ptr->data);
    InorderPrint(ptr->right);
    return;
}


