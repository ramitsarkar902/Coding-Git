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
#include<unordered_map>

#define ll long long
#define mod 1000000007 //10^9+7
              
#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
#define f(i,a,b) for(int i=a;i<b;i++)
#define fm(i,a,b) for(int i=a;i>b;i--)
#define pii pair<int, int>
#define v(x) vector<x>
#define sortv(vec) sort(vec.begin(), vec.end())
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue <int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;
          
          
          
          
          
          
//for linked list          
struct Node
{
int data;
struct Node *next;
 Node(int x)
{
data = x;
 next = NULL;
 }
};
          
          
          
int dp[1001][1001];
   
  int solve(string &s1,string &s2,int n,int m){
       if(n==0||m==0)return 0;
        if(dp[n][m]!=-1)return dp[n][m];
        else{
            if(s1[n-1]==s2[m-1])return dp[n][m]=1+solve(s1,s2,n-1,m-1);
            
            else return dp[n][m]=max(solve(s1,s2,n-1,m),solve(s1,s2,n,m-1));
        }
  }
    int minimumNumberOfDeletions(string s) { 
        // code here
        string s1=s;
        reverse(s.begin(),s.end());
        memset(dp,-1,sizeof(dp));
        return s.length()-solve(s1,s,s1.length(),s.length());
    }          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}