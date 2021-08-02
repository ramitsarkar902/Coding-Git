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

#define ll long long
#define mod 1000000007 //10^9+7
              
#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
using namespace std;

bool isPossible(int arr[],int n, int m, int min){
    int c=1,sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>min){
            return false;
        }
        if(sum+arr[i]>min){
            c++;
            sum=arr[i];

            if(c>m) return false;
        }
        else{
            sum+=arr[i];
        }
    }
    return true;
}          
          
int allocateMinimum(int arr[], int n, int m){
    int sum=0;
    if(n<m) return -1;

    for(int i=0;i<n;i++){
        sum+=arr[i];

    }

    int start=0,end=sum,ans=INT_MAX;
    while(start <=end){
        int mid=(start+end)/2;
        if(isPossible(arr,n,m,mid)){
            ans=min(ans,mid);
            end=mid-1;
        }else start=mid+1;
    }

}         
          
int main(){
          
          
          
return 0;
}