#include<stdio.h>
#include<stdlib.h>

typedef struct node  
{
  int data;
  struct node *next;
}node;

int main()
{
  int n,i=1,a;
  node *head,*ptr,*ptr2;
  printf("Enter the no. of nodes ");
  scanf("%d",&n);

  printf("Enter the %d node ",i);
  scanf("%d",&a);
  ptr = (node*)malloc(sizeof(node));
  ptr->data = a;
  ptr->next = NULL;
  head = ptr;

  for(i=2;i<=n;i++)
    {
      printf("Enter the %d node ",i);
      scanf("%d",&a);
      ptr2 = (node*)malloc(sizeof(node));
      ptr2->data = a;
      ptr2->next = NULL;
      ptr->next = ptr2;
      ptr = ptr2;
    }
  ptr = head;
  while(ptr!=NULL)
  {
    printf("  %d\t",ptr->data);
    ptr = ptr->next;
  }
//Insert at the end
    printf("Do you wanna insert a node in the last ?\n");
    printf("Press 1 for yes , 0 for no : ");
    scanf("%d",&a);
    
    ptr = head;
    while(ptr->next !=NULL)
    {
      ptr = ptr->next;
    }
    ptr2 = (node*)malloc(sizeof(node));
    ptr2->data = 200;
    ptr2->next = NULL;
    ptr->next = ptr2;
    
    ptr = head;
    while(ptr!=NULL)
    {
        printf("  %d\t",ptr->data);
        ptr = ptr->next;
    }
}