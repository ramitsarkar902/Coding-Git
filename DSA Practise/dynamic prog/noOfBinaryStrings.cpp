
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


//Count number of binary strings without consecutive 1’s
          
//n=3
//output=5
//000,001,010,100,101.          
          
int main(){
          int n;cin>>n;
          vi fib(n+2,0);
          fib[0]=1;
          fib[1]=1;
          for(int i=2;i<=n+1;i++){
              fib[i]=fib[i-1]+fib[i-2];
          }

          cout<<fib[n+1];
          
          
return 0;
}