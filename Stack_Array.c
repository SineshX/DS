//Stack Using Array # LIFO
#include<stdio.h>
#include<stdlib.h>

int top=-1,data,n;
int node[10];
void myPush();
void printStack();
void myPop();

int main(void)
{
    int ch;
    printf("Please Enter the size of Stack : ");
    scanf("%d",&n);
    while (1) 
    {
        printf("1.push \n2.pop \n3.display \n4.exit\nEnter your choice: ");
        scanf("%d",&ch);
        switch (ch) 
        {
            case 1:
                myPush();
                break;
            case 2:
                myPop();
                break;
            case 3:
                printStack();
                break;
            case 4:
                exit(0);
            default:
                printf("Please Enter correct choice: \n");
                break;
        }
    }
    //printStack();
    return 0;
}
/*------------------------------------------------*/
void myPush(){
    if(top+1 == n){
        printf("\nStack OverFlow :)\n");
        return;
    }
    top++;
    printf("Enter the top node : ");
    scanf("%d",&data);
    node[top]=data;
}
/*------------------------------------------------*/
void printStack(){
    printf("\nHere is yout Stack : ");
    for(int i=0;i<=top;i++){
        printf("%d\t",node[i]);
    }
}
/*------------------------------------------------*/
void myPop(){
    if(top == -1){
        printf("\nStack UnderFlow :_:\n");
        return;
    }
    printf("\nYou poped out %d\n",node[top]);
    top--;
}
/* Output : 

Please Enter the size of Stack : 5
1.push
2.pop
3.display
4.exit
Enter your choice: 1
Enter the top node : 10
1.push
2.pop
3.display
4.exit
Enter your choice: 1
Enter the top node : 20
1.push
2.pop
3.display
4.exit
Enter your choice: 1
Enter the top node : 30
1.push
2.pop
3.display
4.exit
Enter your choice: 3

Here is yout Stack : 10 20      30      
1.push
2.pop
3.display
4.exit
Enter your choice: 2

You poped out 30
1.push
2.pop
3.display
4.exit
Enter your choice: 3

Here is yout Stack : 10 20      
1.push
2.pop
3.display
4.exit
Enter your choice: 4
PS C:\Users\DCIIT\Desktop\CSE\sem3\DS>
*/