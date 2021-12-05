#include <stdio.h>
#include <stdbool.h>
int size=0;
int *arr;

int* create(){
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    size=n;
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    return arr;
}

void insert(){
    int index,n;
    printf("How many elements you want to enter?\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter the index positions you want to insert elements\n");
        scanf("%d",&index);

        printf("Enter the element\n");
        int a;
        scanf("%d",&a);

        if(index>=size || size<0 ){
            printf("Invalid index\n");
            return;

        }else{
            for(int i=size;i>index;i--)arr[i]=arr[i-1];

            arr[index]=a;
            size++;
        }
    }
}

void delete(){
    int index,k;

    printf("How many elements you want to delete?\n");
    scanf("%d",&k);

for (int i=0; i<k; i++) {
        printf("Enter the Index you want to Delete\n");
        scanf("%d", &index);

        if(index>=size || size<0) {
            printf("Invalid Index\n");
            return;
        } else {
            for (int i=index; i<size-1; i++) {
                arr[i] = arr[i+1];
            }
            size--;
        }
    }
    
}
void display() {
    printf("The elements in the array are: \n");
    for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
 int main(){
     arr = (int*)malloc(1000*sizeof(int));
     int option;
     bool flag=true;
     while(flag){
         printf("_ _ _MENU_ _ _ _\n");
         printf("1.Create array\n2.Insert Element\n3.Delete Element\n4.Display array elements\n5.Exit\n");

         scanf("%d",&option);
         switch(option){
             case 1:
             arr=create();
             display();
             break;

             case 2:
             insert();
             break;

             case 3:
             delete();
             break;

             case 4:
             display();
             break;

             case 5:
             printf("Exiting the program\n");
             flag=false;
            break;

            default:
            printf("Invalid Option\n");
                     }
     }
 }

