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
#include <chrono>

#define ll long long
#define mod 1000000007 //10^9+7
              
#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
#define f(i,a,b) for(int i=a;i<b;i++)
#define fm(i,a,b) for(int i=a;i>b;i--)
#define pii pair<int, int>
#define vi vector<int>
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue <int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;
          
          
void maxSubarray(int arr[],int n,int k,int x){
    int sum=0,ans=0;

    f(i,0,k){
        sum+=arr[i];
    }
    if(sum<x) ans=sum;

    f(i,k,n){
        sum=(sum-arr[i-k])+arr[i];
        if(sum>=ans && sum<x){
            ans=sum;
        }
    }

    cout<<ans;
}         


auto start = chrono::steady_clock::now();
          
int main(){
          int arr[]={7,5,4,6,8,9};
          int n=6;
          int k=3;
          int x=20;
          maxSubarray(arr,n,k,x);

          cout <<endl;
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() <<  "ms" << endl;
          
return 0;
}