#include <stdio.h>

void merge(int arr[],int l,int m,int r){
    int left_size=m-l+1;
    int right_size=r-m;

    int left[left_size],right[right_size];

    for(int i=0;i<left_size;i++)left[i]=arr[l+i];
    for(int j=0;j<right_size;j++)right[j]=arr[m+j+1];

    int i=0,j=0,k=l;
    while(i<left_size && j<right_size){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            i++;
        }
        else{
            arr[k]=right[j];
            j++;
        }
        k++;
    }

    //for leftover elements
    while(i<left_size){
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<right_size){
        arr[k]=right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int l,int r){
    if(l<r){
        int mid=l+(r-l)/2;

        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}
int main(){
    printf("Enter the size of the array:");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of the array\n");
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    mergeSort(arr, 0, n - 1);//calling the merge function on the array
    printf("\nAfter sorting the array:\n");
     for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}