#include <stdio.h>
#include<stdbool.h>
struct Node{
    struct Node* prev;
    int data;
    struct Node* next;
}* head;

void insert_begin(){
    struct Node *ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    if(ptr==NULL){
        printf("Overflow\n");
    }else{
        printf("Enter value\n");
        int n;
        scanf("%d",&n);

         if(head==NULL)  
        {  
            ptr->next=NULL;
            ptr->data=n;
            ptr->prev=NULL;
            head=ptr;
        }else{
            ptr->data=n;
            ptr->prev=NULL;
            ptr->next=head;
            head->prev=ptr;
            head=ptr;
        }
         printf("\nNode inserted\n");    
    }
}

void insert_end(){
    struct Node *ptr,*temp;
    ptr=(struct Node*)malloc(sizeof(struct Node));

    int n;
    if(ptr==NULL)printf("Overflow\n");
    else{
        printf("Enter value:");
        scanf("%d",&n);

        if(head==NULL){
            ptr->next=NULL;
            ptr->prev=NULL;
            ptr->data=n;
        }else{
            temp=head;
            while(temp->next){
                temp=temp->next;
            }

            temp->next=ptr;
            ptr->prev=temp;
            ptr->next=NULL;
        }
         printf("\nNode inserted\n");
    }
   
}

void display(){
    struct Node *ptr=head;
    printf("Printing values:\n");
    while(ptr){
        printf("%d\n",ptr->data);
    }

}

void search(){
    int n;
    struct Node *ptr=head;bool flag=false;int i=0;
    if(ptr==NULL){
        printf("Overflow\n");
    }else{
        printf("Enter element to search:");
        scanf("%d",&n);
        while(ptr){
            if(ptr->data==n){
                 printf("\nItem found at location %d ",i+1);  
                flag=true;
                break;
            }
            ptr=ptr->next;
        }
        if(flag==false)printf("\nItem not found\n");

    }
    
}

void delete(){
    
}