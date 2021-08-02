#include<iostream>

using namespace std;

int main(){
    int arr[]={0,1};
    int sum=1;
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        sum=arr[i]+arr[i+1]+1;
        arr[i+3]=sum;    }
cout<<sum;
}