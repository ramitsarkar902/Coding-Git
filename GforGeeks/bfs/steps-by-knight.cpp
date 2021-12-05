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
          
          
int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N){
    queue<pii>q;
    v(v(int))vis(N+1,v(int)(N+1,0));
    q.push({KnightPos[0]-1,KnightPos[1]-1});
    while(!q.empty()){
        int a = q.front().first;
        int b = q.front().second;
        q.pop();
        
        if(a+2<N && b+1<N && vis[a+2][b+1]==0 )
        {
            q.push({a+2,b+1});
            vis[a+2][b+1] = vis[a][b]+1;
        }
        if(a+2<N && b-1>=0 && vis[a+2][b-1]==0)
        {
            q.push({a+2,b-1});
            vis[a+2][b-1] = vis[a][b]+1;
        }
        if(a+1<N && b+2<N && vis[a+1][b+2]==0)
        {
            q.push({a+1,b+2});
            vis[a+1][b+2] = vis[a][b]+1;
        }
        if(a-1>=0 && b+2<N && vis[a-1][b+2]==0)
        {
            q.push({a-1,b+2});
            vis[a-1][b+2] = vis[a][b]+1;
        }
        if(a+1<N && b-2>=0 && vis[a+1][b-2] ==0)
        {
            q.push({a+1,b-2});
            vis[a+1][b-2] = vis[a][b]+1;
        }
        if(a-1>=0 && b-2>=0 && vis[a-1][b-2] ==0)
        {
            q.push({a-1,b-2});
            vis[a-1][b-2] = vis[a][b]+1;
        }
         if(a-2>=0 && b+1<N && vis[a-2][b+1]==0)
        {
            q.push({a-2,b+1});
            vis[a-2][b+1] = vis[a][b]+1;
        }
        if(a-2>=0 && b-1>=0 && vis[a-2][b-1]==0)
        {
            q.push({a-2,b-1});
            vis[a-2][b-1] = vis[a][b]+1;
        }
        
    }
    
    return vis[TargetPos[0]-1][TargetPos[1]-1];
}          
          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}