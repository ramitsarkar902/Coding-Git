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
          
int solve(int i,int f,int n,int m,vector<int>&a,vector<int>&b, map<int,int> mp[], map<int,int> np[], vector<vector<int>> &dp)
    {
        if(i>=n && f==0)
        return 0;
        else if(i>=m && f==1)
        return 0;
        
        if(dp[i][f]!=-1)
        return dp[i][f];
        
        int x=0,k=0;
        
        if(f==0)
        k=a[i];
        else
        k=b[i];
        
        int s=(mp[0][k]+mp[1][k])*k;
        
        if(mp[0][k]>1 && mp[1][k]>1)
        {
            int g=(s-k)+solve(np[f^1][k]+1,f^1,n,m,a,b,mp,np,dp);
            x=max(x,g);
            g=(s-(2*k))+solve(i+1,f,n,m,a,b,mp,np,dp);
            x=max(x,g);
        }
        else if(mp[0][k]>0 && mp[1][k]>0)
        {
            x=max(x,(s-k)+solve(i+1,f,n,m,a,b,mp,np,dp));
            x=max(x,(s-k)+solve(np[f^1][k]+1,f^1,n,m,a,b,mp,np,dp));
        }
        else
        {
            x=max(x,s+solve(i+1,f,n,m,a,b,mp,np,dp));
        }
            
        
        dp[i][f]=x;
        return x;
    }
    int maxBalls(int n, int m, vector<int> a, vector<int> b){
        map<int,int>mp[2],np[2];
        vector<vector<int>> dp(10010,vector<int>(2));
        for(int i=0;i<(max(n,m));i++)
        {
            dp[i][0]=-1;
            dp[i][1]=-1;
        }
        vector<int>v1,v2;
        for(int i=0;i<n;i++)
        {
            if(mp[0][a[i]]==0)
            {
                v1.push_back(a[i]);
                np[0][a[i]]=i;
            }
            mp[0][a[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            if(mp[1][b[i]]==0)
            {
                v2.push_back(b[i]);
                np[1][b[i]]=i;
            }
            mp[1][b[i]]++;
        }
        
        int ans=solve(0,0,v1.size(),v2.size(),v1,v2,mp,np,dp);
        ans=max(ans,solve(0,1,v1.size(),v2.size(),v1,v2,mp,np,dp));
        return ans;
    }
          
          
int main(){
          
          
          
return 0;
}