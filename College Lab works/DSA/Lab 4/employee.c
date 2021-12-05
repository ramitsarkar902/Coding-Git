#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Employee {
    struct Employee* next;
    struct Employee* prev;
    char Emp_Name[40];
    char Emp_Dept[40];
    int Emp_Id;
} *head=NULL;

void create() {
    int t;
    printf("\nHow Many Employees Data You want to Enter?\n");
    scanf("%d", &t);
    
    int i=1;

    head = (struct Employee*) malloc (sizeof(struct Employee));
    head->next=NULL;
    head->prev=NULL;

    printf("\nPlease Enter the Details of Employee %d\n", i++);

    printf("Enter the Emp_Id No.: ");
    scanf("%d", &head->Emp_Id);

    printf("Enter the Emp_Name: ");
    scanf(" %[^\n]s", head->Emp_Name);

    printf("Enter the Emp_Dept: ");
    scanf(" %[^\n]s", head->Emp_Dept);

    t--;
    struct Employee *p=head, *q=NULL;

    while(t--) {
        q=(struct Employee*) malloc (sizeof(struct Employee));
        printf("\nPlease Enter the Details of Employee %d\n", i++);

        printf("Enter the Emp_Id No.: ");
        scanf("%d", &q->Emp_Id);

        printf("Enter the Emp_Name: ");
        scanf(" %[^\n]s", q->Emp_Name);

        printf("Enter the Emp_Dept: ");
        scanf(" %[^\n]s", q->Emp_Dept);

        p->next = q;
        q->prev = p;
        p=q;
    }
    p->next=NULL;
}

void deleteNode() {
    struct Employee* ptr1=head, *ptr2=head, *ptr3;
    for (; ptr1!=NULL; ptr1=ptr1->next) {
        for (ptr2=ptr1->next; ptr2!=NULL; ptr2=ptr2->next) {
            if(ptr1->Emp_Id==ptr2->Emp_Id && ptr2->next) {
                ptr2->prev->next=ptr2->next;
                ptr2->next->prev=ptr2->prev;
            } else if(ptr1->Emp_Id==ptr2->Emp_Id && ptr2->next==NULL) {
                ptr2->prev->next = NULL;
                ptr2->prev=NULL;
            }
        } 
    }

    free(ptr2);
}

void reverse() {
    struct Employee* p = head;
    struct Employee* temp=NULL;
    while (p != NULL){     
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        p = p->prev;

        if (p->next == NULL){
            p->next = p->prev;
            p->prev = NULL;
            head = p;
            break;
        }
    }
}

void cluster() {
     struct Employee *ptr1=head, *ptr2=head, *ptr3=NULL;
    // int temp;
    // char temp_name[40], temp_dept[40];

    for (ptr1=head; ptr1!=NULL; ptr1=ptr1->next) {  
        ptr3 = ptr1->next; 
        for(ptr2=ptr1->next; ptr2!=NULL; ptr2=ptr2->next) {
            if( strcmp(ptr1->Emp_Dept, ptr2->Emp_Dept)==0 && ptr1->next!=ptr2 && ptr2->next) {
                ptr3->next = ptr2->next;
                ptr3->prev = ptr2;
                ptr2->next->prev = ptr3;
                ptr2->next = ptr3;
                ptr2->prev = ptr1;
                ptr1->next = ptr2;
            } else if(strcmp(ptr1->Emp_Dept, ptr2->Emp_Dept)==0 && ptr1->next!=ptr2 && !ptr2->next) {
                ptr3->next->prev = ptr2;
                ptr2->prev->next = NULL;
                ptr2->prev = ptr3;
                ptr2->next = ptr3->next;
                ptr3->next = ptr2;
            }
        }
    }
}


void display() {
    struct Employee* p=head;
    printf("Employee's Details are as Follows:\n");
    while(p) {
        printf("%d  %s  %s", p->Emp_Id, p->Emp_Name, p->Emp_Dept);
        printf("\n");
        p=p->next;
    }
}

int main() {
    int x;
    while(1) {
        printf("\nSelect the Option:\n1. Create\n2. Delete Duplicates\n3. Reverse\n4. Cluster Records\n5. Display\n6. Exit\n");
        printf("\nOption: ");
        scanf("%d", &x);

        switch(x) {
            case 1:
                create();
                break;
            
            case 2:
                deleteNode();
                break;
            
            case 3:
                reverse();
                break;
            
            case 4:
                cluster();
                break;
            
            case 5:
                display();
                break;
            
            case 6:
                return 0;

            default:
                printf("Invalid Choice...Please Try Again...\n");
        }

    }

    return 0;
}