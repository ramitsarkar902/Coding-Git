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
          
int maximumPath(int N, vector<vector<int>> a)
    {
        // code here
         int dp[N+1][N+1];
        for(int i=0;i<=N;i++)
        {
            dp[i][0] = 0;
            dp[0][i] = 0;
        }
        for(int i=1;i<=N;i++)
        {
            for(int j=1;j<=N;j++)
            {
                dp[i][j] = a[i-1][j-1] + max({dp[i-1][j],dp[i-1][j-1],dp[i-1][j+1]});
            }
        }
        int res=INT_MIN;
        for(int i=0;i<=N;i++)
        {
            res = max(res,dp[N][i]);
        }
        return res;
    }          
          
          
int main(){
          
          
          
return 0;
}