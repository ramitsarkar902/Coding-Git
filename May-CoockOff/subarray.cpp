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
          
          
void solve(int arr[], int a, int size){
    int c=0;
        if(size ==a) cout<<0<<endl;
        else{
            for(int i=0;i<size;i++){
                for(int j=i;j<size;j++){
                    c+=arr[j];
                }
            }
        }
}          



int main(){
         int t;
         cin>>t;
         while(t--){
             int n,k;
             int arr[10];
             for(int i=0;i<n;i++){
                 cin>>arr[i];
             }
            solve(arr,k,n);

         } 
          
          
return 0;
}