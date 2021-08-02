#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <deque>
#include <iostream>
#include <list>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <string.h>
#include <algorithm> 
#include <array>

#define ll long long
#define mod 1000000007 //10^9+7
              
#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
using namespace std;
          
bool isFeasible(int mid, int arr[], int n, int k){
    int temp=arr[0],c=1;

    for(int i=1;i<n;i++){
        if(arr[i]-temp >=mid){
            temp=arr[i];
            c++;
        }
        if(c == k){
            return true;
            break;
        }
    }
    return false;
}   
//uses the binary search technique 
int largestMinDistance(int arr[], int n, int k){
    sort(arr,arr+n);
    int left=1,right=arr[n-1];
    int res=-1;

    while(left<right){
        int mid=(left+right)/2;
        if(isFeasible(mid, arr,n,k)){
            res=max(res,mid);
            left=mid+1;
        }else{
            right=mid;
        }
    }
}
          
          
int main(){
          int a[]={1,2,8,4,9};
          int n=5;
          int k=3;

          cout<<largestMinDistance(a,n,k);
          
          
return 0;
}