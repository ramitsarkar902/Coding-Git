#include<stdio.h>
#include<stdlib.h>

struct car {
    int fuel;
    int priority;
    struct car *next;
} *first = NULL;

void set_priority() {
    struct car *p = first;
    int i=1;
    while(p) {
        p->priority = i++;
        p=p->next;
    }
}

void insert(int f) {
    struct car *temp=NULL, *q=first;
    temp = (struct car*) malloc (sizeof(struct car));
    temp->fuel = f;

    if(first==NULL || temp->fuel<first->fuel) {
        temp->next = first;
        first = temp;
    } else {
        while(q->next!=NULL) {
            if(q->next->fuel<f) {
                q=q->next;
            } else {
                break;
            }
        }
        temp->next = q->next;
        q->next = temp;
    }

    set_priority();
}

void display() {
    struct car *p = first;
    if(first==NULL) {
        printf("\nNo Car is in Queue.\n");
    } else {
        printf("\nCars arranged in ascending queue are:\n");
        printf("\nPriority      Car Fuel\n");

        while(p) {
            printf("%5d %12d\n", p->fuel, p->priority);
            p=p->next;
        }
    }
}

int main() {
    int n;
    int choice;
    while(1) {

        printf("\n_ _ _MENU_ _ _\n1.Insert\n2.Display \n3.Exit\n");
        printf("Option: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("\nEnter the Fuel Capacity of Car: ");
                scanf("%d", &n);

                insert(n);
                break;

            case 2:
                display();
                break;
            
            case 3:
                return 0;

            default:
            printf("Invalid Option");
            break;
        }
        
    }

    return 0;
}