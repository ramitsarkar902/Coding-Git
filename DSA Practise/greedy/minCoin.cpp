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
          
int MinCoin(vector<int>nums, int amount)
	{
	    // Code here
	     int n = nums.size();

    int dp[n+1][amount+1];
    
    for(int j = 0; j <= amount; j++)
        dp[0][j] = INT_MAX - 1;
    
    
    for(int i = 0; i <= n; i++)
        dp[i][0] = 0;
    
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= amount; j++){
            
            if(nums[i-1] <= j)
                dp[i][j] = min(dp[i-1][j], 1 + dp[i][j-nums[i-1]]);
                
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    
    return dp[n][amount] == INT_MAX - 1 ? -1 : dp[n][amount];
	}          
          
          
int main(){
          
          
          
return 0;
}