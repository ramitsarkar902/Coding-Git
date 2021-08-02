#include <chrono>
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
#define f(i,a,b) for(int i=a;i<b;i++)
#define fm(i,a,b) for(int i=a;i>b;i--)
#define pii pair<int, int>
#define vi vector<int>
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue <int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;
          
int findMaxPeak(int arr[],int n){
    int res=0;
    f(i,1,n){
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            res=max(arr[i],res);
            
        }
    }

    return res;
}         

 auto start = chrono::steady_clock::now();      
int main(){
          int arr[]={10,20,15,2,23,90,67};
          int n=6;
          cout<<findMaxPeak(arr,n);

          cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}
