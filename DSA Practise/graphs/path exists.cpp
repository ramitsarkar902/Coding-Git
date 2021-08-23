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


void dfs(vector <vector <int>> &M,int x,int y,vector <vector <bool>>& vis,int n)
{
    if(x>=n || x<0 || y>=n || y<0|| vis[x][y]==true || M[x][y]==0)
    return;
    vis[x][y]=true;
    dfs(M,x+1,y,vis,n);
    dfs(M,x-1,y,vis,n);
    dfs(M,x,y+1,vis,n);
    dfs(M,x,y-1,vis,n);
}
bool is_possible(vector <vector <int>> &M, int n) {
    vector <vector <bool>> vis(n,vector <bool>(n,false));
    int a,b,dx,dy;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(M[i][j]==1)
            {
                a=i;b=j;
            }
            else if(M[i][j]==2)
            {
                dx=i;dy=j;
            }
        }
    }
    dfs(M,a,b,vis,n);
    return vis[dx][dy];
}          
          
          
int main(){
          
          
          
return 0;
}