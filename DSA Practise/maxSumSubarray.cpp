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
          
//using sliding window concept 
// it states that add one index to the right and delete one from the left
//reduces time complexity
         

int calc(int arr[], int n, int k, int x){
    int sum=0,ans=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    ans=sum;
    sum=0;
    for(int i=k;i<n-1;i++){
         sum+=arr[i-1]+arr[i]+arr[i+1];   
         if(sum<=x){ 
        ans=max(ans,sum);
         }
    }
    return ans;
        
}        
          
int main(){
          int arr[]={7,5,4,6,8,9};
          int n=6;
        int k=3;
        int x=20;
        cout<<calc(arr,n,k,x);
          
          
return 0;
}