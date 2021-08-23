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
          
int minCost(int N, vector<int> cost[]) {
        vector<vector<int>> dp(N+1 , vector<int>(3 , -1));
        int price;
        dp[0][0] = dp[0][1] = dp[0][2] = 0;
        for(int i = 1 ; i<=N ; i++){
            dp[i][0] = cost[i-1][0] + min(dp[i-1][1] , dp[i-1][2]);
            dp[i][1] = cost[i-1][1] + min(dp[i-1][0] , dp[i-1][2]);
            dp[i][2] = cost[i-1][2] + min(dp[i-1][0] , dp[i-1][1]);
            price = min(dp[i][0] , min(dp[i][1] , dp[i][2]));
        }
        return price;
    }         
          
          
int main(){
          
          
          
return 0;
}