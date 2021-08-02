#include <iostream>
#include <string>
#include <fstream>
#include <cctype>


using namespace std;


double average(int a[], int n)
{
    // Find sum of array element
    int sum = 0;
    for (int i=0; i<n; i++)
       sum += a[i];
 
    return (double)sum/n;
}


int main(){
    int n;
    cin>>n;
    int arr[7];
    int out[10];
    int c=0;
    while(n!=0){
        for(int j=0;j<7;j++){
            cin>> arr[j];
        }
        int n = sizeof(arr)/sizeof(arr[0]);
        out[c]= average(arr, n);

    }
 
    for(int i=0;i<n;i++){
        cout<< out[i];
    }
    return 0;
}