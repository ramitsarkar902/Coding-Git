#include<stdlib.h>
#include<string.h>
#include<stdio.h>
struct Student
{
    int regNo;
    char name[100];
    struct Student *next;
    
}* head;

void insert(int rno,char *name){
     struct Student * student = (struct Student *) malloc(sizeof(struct Student));
    student->regNo = rno;
    strcpy(student->name, name);
    student->next = NULL;

    if(head == NULL){
        head=student;
    }
    else{
        student->next = head;
        head = student;
    }
}

void sort(struct Student * start){
    struct Student *min=NULL;
    struct Student *traverse;
    while(start->next){
        min = start;
        traverse=start->next;
        while(traverse){
            if(min->regNo>traverse->regNo){
                min = traverse;
            }
            traverse=traverse->next;
        }
        int temp=start->regNo;
        start->regNo = min->regNo;
        min->regNo = temp;
        start=start->next;
    }

    

}

 void reverse(){
    struct Student *prevNode, *curNode;

    if(head != NULL)
    {
        prevNode = head;
        curNode = head->next;
        head = head->next;

        prevNode->next = NULL; // Make first node as last node

        while(head != NULL)
        {
            head = head->next;
            curNode->next = prevNode;

            prevNode = curNode;
            curNode = head;
        }

        head = prevNode;

        printf("Reversed List Successfully\n");
    }
}

void deleteSecondLast(struct Student * start){
    struct Student *nextNode=start->next->next;
    while(nextNode->next!=NULL)start=start->next;

    struct Student *temp=start->next->next;
    start->next=temp;
}

void display()
{
    struct Student * temp = head;
    while(temp!=NULL){
        
        printf("Roll Number: %d\n", temp->regNo);
        printf("Name: %s\n", temp->name);
        temp = temp->next;

        
    }
}

int main(){
     head = NULL;
    int choice=0;
    char name[100];
    int regNo;

    

    while(choice!=6){
        printf("1 to insert student details\n2 to sort the list in ascending order of registration no\n3 to display all student details\n4 to delete second last element\n5 to reverse the list\n6 to exit\n");
    scanf("%d",&choice);
        switch(choice){
            case 1:
             printf("Enter registration no: ");
                scanf("%d", &regNo);
                printf("Enter name: ");
                scanf("%s", name);
                insert(regNo, name);
                break;

                case 2:
                sort(head);
                break;

                case 3:
                display();
                break;

                case 4:
                deleteSecondLast(head);
                break;

                case 5:
                reverse();
                break;

                case 6:
                return 6;

                default:
                printf("Invalid choice: ");
                break;
        }
    }
}