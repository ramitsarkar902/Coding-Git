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

const int N=1e3+2;
int wt[N],val[N];

          
          
int main(){
         int n;cin>>n;
         int w;cin>>w;
         f(i,0,n) cin>>wt[i];
         f(i,0,n)cin>>val[i];
         vector<int>dp(w+1,0);
         for(int j=0;j<=w;j++){
             f(i,0,n){
                 if(j-wt[i]>=0)
                 dp[j]=max(dp[j],val[i]+dp[j-wt[i]]);
             }
         }
          
          
return 0;
}