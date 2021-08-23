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

int minDifference(int arr[], int n) { 
	  
	    int sum = accumulate(arr, arr+n, 0);
	    int dp[n+1][sum];  
	    // initializes dp
	    for(int i = 0; i <= n; ++i) {
	        for(int j = 0; j <= sum; ++j) {
	            if(i == 0){
	                dp[i][j] = 0;
	            }
	            if(j == 0) {
	                dp[i][j] = 1; 
	            }
	        }
	    }
	    // subset problem 
	    for(int i = 1; i <= n; ++i) {
	        for(int j = 1; j <= sum; ++j) {
	            if(arr[i-1] > j) {
	                dp[i][j] = dp[i-1][j];
	            }
	            else {
	                dp[i][j] = dp[i-1][j] || dp[i-1][j - arr[i-1]]; 
	            }
	        }
	    }
	    // calucation from the dp table for the current question
	  unordered_set<int>hash;  
	  for(int i = 0; i <= sum; ++i){
	      if(dp[n][i]){
	          hash.insert(i); 
	      }
	  }
	    
	  int min_val = INT_MAX; 
	  for(int i = 0; i <= sum/2; i++){
	      if(hash.find(i) != hash.end()){
	          min_val = min(min_val, sum-2*i);
	      }
	  }
	    
	  return min_val; 
	}         
    vector<vector<bool>>dp;

int minDifference(int arr[], int n)  { 
	    
	    int tot = 0;
	    tot = accumulate(arr,arr+n,tot);
	    dp = vector<vector<bool>>(n+1,vector<bool>(tot+1));
	    
	    for(int i=0;i<=tot;i++)
	    dp[0][i]=0;
	    
	    for(int j=0;j<=n;j++)
	    dp[j][0]=1;
	    
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=tot;j++)
	        {
	            if(arr[i-1]<=j)
	            dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
	            else
	            dp[i][j] = dp[i-1][j];
	        }
	    }
	    int res=tot;
	    for(int i=0;i<=tot;i++)
	    {
	        if(dp[n][i])
	        {
	            res = min(res,abs(i-(tot-i)));
	        }
	    }
	    return res;
	}  
          
          
int main(){
          
          
          
return 0;
}