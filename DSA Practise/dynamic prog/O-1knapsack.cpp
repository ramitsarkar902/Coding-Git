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
int val[N],wt[N];
int dp[N][N];
int Knapsack(int n,int w){
    if(w<=0 || n<=0) return 0;

    if(dp[n][w]!=-1) return dp[n][w];
    if(wt[n-1]>w) dp[n][w]= Knapsack(n-1,w);

    dp[n][w]=max(Knapsack(n-1,w),Knapsack(n-1,w-wt[n-1])+val[n-1]);

    return dp[n][w];    

}

          
          
int main(){
        int n;cin>>n;
        f(i,0,n){
            f(j,0,n){
                dp[i][j]=-1;
            }
        }
        f(i,0,n){
            cin>>val[i];
        }
        f(i,0,n){
            cin>>wt[i];
        }
        int w;cin>>w;

        cout<<Knapsack(n,w)<<endl;
          
          
return 0;
}