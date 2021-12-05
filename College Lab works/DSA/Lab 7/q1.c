#include <stdio.h>
#include<stdlib.h>

#define size 5    
int deque[size];  
int front=-1, rear=-1;  

void enqueue_front(int x)  
{  
    if((front==0 && rear==size-1) || (front==rear+1))  
    {  
        printf("deque is full");  
    }  
    else if((front==-1) && (rear==-1))  
    {  
        front=rear=0;  
        deque[front]=x;  
    }  
    else if(front==0)  
    {  
        front=size-1;  
        deque[front]=x;  
    }  
    else  
    {  
        front=front-1;  
        deque[front]=x;  
    }  
}  
  
void enqueue_rear(int x)  
{  
    if((front==0 && rear==size-1) || (front==rear+1))  
    {  
        printf("deque is full");  
    }  
    else if((front==-1) && (rear==-1))  
    {  
        rear=0;  
        deque[rear]=x;  
    }  
    else if(rear==size-1)  
    {  
        rear=0;  
        deque[rear]=x;  
    }  
    else  
    {  
        rear++;  
        deque[rear]=x;  
    }  
  
}  
  
void display()  
{  
    int i=front;  
    printf("\n Elements in a deque : ");  
      
    while(i!=rear)  
    {  
        printf("%d ",deque[i]);  
        i=(i+1)%size;  
    }  
     printf("%d",deque[rear]);  
}  
  
void getfront()  
{  
    if((front==-1) && (rear==-1))  
    {  
        printf("Deque is empty");  
    }  
    else  
    {  
        printf("\nThe value of the front is: %d", deque[front]);  
    }  
      
}  
  
void getrear()  
{  
    if((front==-1) && (rear==-1))  
    {  
        printf("Deque is empty");  
    }  
    else  
    {  
        printf("\nThe value of the rear is: %d", deque[rear]);  
    }  
      
}   
void dequeue_front()  
{  
    if((front==-1) && (rear==-1))  
    {  
        printf("Deque is empty");  
    }  
    else if(front==rear)  
    {  
        printf("\nThe deleted element is: %d", deque[front]);  
        front=-1;  
        rear=-1;  
          
    }  
     else if(front==(size-1))  
     {  
         printf("\nThe deleted element is: %d", deque[front]);  
         front=0;  
     }  
     else  
     {  
          printf("\nThe deleted element is: %d", deque[front]);  
          front=front+1;  
     }  
}  
 
void dequeue_rear()  
{  
    if((front==-1) && (rear==-1))  
    {  
        printf("Deque is empty");  
    }  
    else if(front==rear)  
    {  
        printf("\nThe deleted element is: %d", deque[rear]);  
        front=-1;  
        rear=-1;  
          
    }  
     else if(rear==0)  
     {  
         printf("\nThe deleted element is: %d", deque[rear]);  
         rear=size-1;  
     }  
     else  
     {  
          printf("\nThe deleted element is: %d", deque[rear]);  
          rear=rear-1;  
     }  
}  
  
int main()  
{  
   int choice=0,n;
   while(choice!=6){
       printf("\n_ _ _MENU_ _ _\n");
   printf("\n1.Insert Element from front\n2.Insert element from rear\n3.Delete element from front\n4.Delete element from rear\n5.Display\n6.Exit\n");
   scanf("%d",&choice);
   switch (choice){
       case 1:
       printf("Enter the element:");
       scanf("%d",&n);
       enqueue_front(n);
       break;

       case 2:
       printf("Enter the element:");
       scanf("%d",&n);
       enqueue_rear(n);
       break;

       case 3:
       dequeue_front();
       break;

       case 4:
       dequeue_rear();
       break;

       case 5:
       display();
       break;

       case 6:
       return 6;

       default:
       printf("Unknown choice");
       break;

   }
   }
   
    return 0;  
}  