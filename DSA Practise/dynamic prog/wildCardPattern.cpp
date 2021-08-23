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
          
int wildCard(string pattern,string str){
    int m=pattern.size();
    int n=str.size();
    
    bool dp[n+1][m+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            dp[i][j]=false;
        }
    }
    dp[0][0]=true;            //if both string and pattern are empty
    
    for(int i=1;i<=m;i++){
       if(pattern[i-1]=='*')  //if pattern starts with '*' 
       dp[0][i]=dp[0][i-1];
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(str[i-1]==pattern[j-1] || pattern[j-1]=='?')
            dp[i][j]=dp[i-1][j-1];
            else if(pattern[j-1]=='*')
            dp[i][j]=dp[i-1][j] || dp[i][j-1];//either take tht character from string or skip to next character
        }
    }
    return dp[n][m];
}          
          
          
int main(){
          
          
          
return 0;
}