#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

struct node* head=NULL;

void push(){
    int x;
    printf("Enter element to insert:");
    scanf("%d",&x);
    struct node* temp=malloc(sizeof(struct node));
    temp->data=x;
    temp->next=head;
    head=temp;
}

void pop(){
    struct node* temp=malloc(sizeof(struct node));
    if(head == NULL)
        printf("Stack is Empty\n");
    else
    {
        printf("Popped element = %d\n", head->data);
       temp=head;
       head=head->next;
       free(temp);
    }
}
void display()
{
    struct node *temp = head;
    while(temp != NULL)
    {
         printf("%d->", temp->data);
         temp = temp->next;
    }
    printf("NULL\n");
}
int main(){
    
    int choice=0;
    while(choice!=4){
        printf("\n_ _ _MENU_ _ _\n");
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