#include <stdio.h>
int stack[],n,top;
int n;
void push(){
    if(top>=n-1)printf("Overflow\n");
    else{
        printf("Enter the number to push:");
        int a;
        scanf("%d",&a);
        top++;
        stack[top]=a;
    }
}

void pop(){
    if(top<=-1)
    {
        printf("\nStack underflow");
    }
    else
    {
        printf("\n\t %d element is popped out:",stack[top]);
        top--;
    }
}

void display()
{

    if(top>-1)
    {
        printf("\n The elements in stack are \n");
        for(int i=top; i>=0; i--)
            printf("\n%d",stack[i]);
    }
    else
    {
        printf("\n Empty stack. Please insert some elements first.\n");
    }
   
}

int main(){
    top=-1;
    printf("Enter the size of the stack:");
    scanf("%d", &n);
    stack[n];
    printf("\n_ _ _MENU_ _ _\n");
    int choice=0;
    while(choice!=4){
    printf("\n1 insert into stack\n2 pop from stack\n3 Display\n4 Exit\n");
    printf("Your Option:");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            printf("Exiting..");
            return 4;

             default:
             printf("\nInvalid OPtion");
             break;

        }
    }
    

}