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
struct Student *del = NULL;

void insert()
{
    int marks, registration;
    char name[20];
    struct Student *temp, *trav;
    temp = (struct Student *)malloc(sizeof(struct Student));

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

    if (head == NULL)
    {

        head = temp;
    }

    else
    {

        while (trav->next != NULL)
            trav = trav->next;

        trav->next = temp;
    }
}

void deleteStudents()
{
    struct Student *t = head, *q = NULL;

    int minMarks = 10000, index = 0;
    int count = 0;

    while (t != NULL)
    {
        ++count;
        if (t->marks < minMarks)
        {
            minMarks = t->marks;
            index = count;
        }
        t = t->next;
    }

    t = head, q = NULL;

    if (index == 1)
    {
        printf("The Deleted Node's Value: \n");
        printf("Name:%s\n", head->name);
        printf("Reg No:%d\n", head->regNo);
        printf("Marks:%d\n", head->marks);
        t = head;
        head = head->next;
        free(t);
    }
    else
    {
        for (int i = 0; i < index - 1 && t->next != NULL; i++)
        {
            q = t;
            t = t->next;
        }

        printf("\n\nThe Deleted Node's Value: \n");
        printf("Name:%s\n", t->name);
        printf("Reg No:%d\n", t->regNo);
        printf("Marks:%d\n", t->marks);

        q->next = t->next;
        free(t);
    }
}
void printStudents()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct Student *temp;
    temp = head;
    printf("All Entries:\n");
    while (temp != NULL)
    {
        printf("Name: %s\n", temp->name);
        printf("Reg No.: %d\n", temp->regNo);

        printf("Marks: %d\n", temp->marks);
        printf("**************************\n");
        temp = temp->next;
    }
}
int main()
{
    int cont = 1;
    int choice;
    while (cont == 1)
    {
        printf("Enter choice:\n1) Create/Insert a single Linked List having student data\n2) Delete the student with lowest marks and display\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            printStudents();
            break;
        case 2:
            printf("Deleted student with lowest marks: \n");
            deleteStudents();
            printf("\n");
            printStudents();

            break;
        default:
            printf("Invalid choice %d\n", choice);
        }

        printf("Continue? (1 for yes / 2 for no)");
        scanf("%d", &cont);
    }
    return 0;
}