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
          
          
int subsequenceCount(string str1, string str2)
    {
      //Your code here
       int n = str1.size();
    int m = str2.size();
    
    int dp[n+1][m+1];
    
    for(int j = 0; j <= m; j++)
    {
        dp[0][j] = 0;
    }
    
    for(int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(str1[i-1] == str2[j-1])
            {
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % 1000000007;
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    return dp[n][m];
    }         
          
int main(){
    string st="ramit";
    int n=st.size();
    for(int i=1;i<=n;i++){
        cout<<st[i-1]<<" ";
    }
          
          
          
return 0;
}