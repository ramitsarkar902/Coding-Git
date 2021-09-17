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
          
double solve(vi &a,vi &b){
    int n=max(a.size(),b.size());
    vi arr;
    for(int i=0;i<n;i++){
        arr.push_back(a[i]);
        arr.push_back(b[i]);
    }
    sort(arr.begin(),arr.end());

    int x=arr.size()-1;
    if(x%2!=0) return arr[x/2];
    else{
        int ans=arr[abs(x/2)]+arr[abs((x/2)+1)];
        return arr[ans/2];
    }
   
}         
          
          
int main(){
          vi a={1,4,5};
          vi b={2,3};
          cout<<solve(a,b);
          
          
return 0;
}