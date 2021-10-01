#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <process.h>

struct Student
{
    char name[20];
    int regNo;
    int marks;
    struct Student *next;
    struct Student *prev;
};

struct Student *head = NULL;

void printStudents(){
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct Student *temp;
    temp = head;
    printf("List of Students:\n");
    while (temp != NULL)
    {
        printf("Reg No.: %d\n", temp->regNo);
        printf("Name: %s\n", temp->name);
        printf("Marks: %d\n", temp->marks);
        printf("**************************\n");
        temp = temp->next;
    }
}

void insert()
{
    int marks,registration;
    char name[20];
    struct Student *temp, *trav;
    temp = (struct Student *)malloc(sizeof(struct Student));

    temp->prev = NULL;
    temp->next = NULL;

    printf("Enter Student Name: \n");
    scanf("%s", name);
    printf("Enter Registration number: \n");
    scanf("%d", &registration);
    printf("Enter Marks: \n");
    scanf("%d", &marks);

    strcpy(temp->name, name);
    temp->regNo = registration;
    temp->marks = marks;

    temp->next = NULL;
    trav = head;

    if (head == NULL){

        head = temp;
    }

    else
    {
        while (trav->next != NULL)
            trav = trav->next;
        temp->prev = trav;
        trav->next = temp;
    }
}

void sortStudents(){
    struct Student *current = NULL, *index = NULL;
    int temp;
    if (head == NULL)
    {
        return;
    }
    else
    {
        for (current = head; current->next != NULL; current = current->next)
        {
            for (index = current->next; index != NULL; index = index->next)
            {
                if (current->regNo > index->regNo)
                {
                    temp = current->regNo;
                    current->regNo = index->regNo;
                    index->regNo = temp;
                }
            }
        }
    }
}

int main()
{
    int cont = 1;
    int choice;
    while(cont==1){
        printf("Enter choice:\n1) Create/Insert a Double Linked List having student data\n2) Sort the student data as per registration no. in ascending order\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                insert();
                printStudents();
                break;
            case 2:
                printf("Sorted Student Data by registration number: \n");
                sortStudents();
                printStudents();
                break;
            default:
                printf("Invalid choice %d\n",choice);
        }
        printf("Continue? (1 for yes / 2 for no)");
        scanf("%d",&cont);
    }
    return 0;
}