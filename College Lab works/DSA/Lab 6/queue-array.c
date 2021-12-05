#include <stdio.h>

struct queue{    //circular queue
    int front,rear,size;
    unsigned capacity;
    int * arr;
};

struct queue* createQueue(unsigned capacity){
    struct queue* queue=(struct queue*) malloc(sizeof(struct queue));
    queue->capacity = capacity;
    queue->front=queue->size=0;
    queue->rear=capacity-1;

    queue->arr=(int *)malloc(queue->capacity*(sizeof(int)));

    return queue;

}

int isFull(struct queue* queue){
    return (queue->size==queue->capacity);
}

int isEmpty(struct queue* queue){
    return (queue->size==0);
}

void enQueue(struct queue* queue,int key){
    if(isFull(queue))return;
    else{
        queue->rear=(queue->rear+1)%queue->capacity;
        queue->arr[queue->rear]=key;
        queue->size++;
        printf("\n%d Enqueued to the queue \n",key);
    }
}

int deQueue(struct queue* queue){
    if(isEmpty(queue))return -1;
    else{
        int item=queue->arr[queue->front];
        queue->front=(queue->front+1)%queue->capacity;
        queue->size--;
        return item;
    }
}

int main(){
    struct queue* queue=createQueue(5);
   enQueue(queue,10);
   enQueue(queue,20);
   enQueue(queue,30);
   enQueue(queue,40);
   enQueue(queue,50);

  printf("%d dequeued from queue\n\n",
		deQueue(queue));
	printf("%d dequeued from queue\n\n",
		deQueue(queue));

        return 0;

}