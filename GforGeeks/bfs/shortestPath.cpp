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
          
          
          
 int bfs(int N,int M,vector<vector<int>>grid,int X,int Y){
    if(grid[0][0]==1 || grid[X][Y]==1)return -1;

    v(v(bool))visited(N,v(bool)(M,false));
    queue<pair<int,pair<int,int>>>q;
    q.push({0,{0,0}});
    visited[0][0]=true;

    while(!q.empty()){
        pair<int,pair<int,int>> a;
        int dist=a.first;
        int i=a.second.first;
        int j=a.second.second;
        q.pop();

        if(i==X && j==Y)return dist;

        if(i+1<N && visited[i+1][j]==false && grid[i+1][j]==1){
            visited[i+1][j]=true;
            q.push({dist+1,{i+1,j}});
        }
          if(j+1<M && visited[i][j+1]==false && grid[i][j+1]==1)
           {
               visited[i][j+1]=true;
                q.push({dist+1,{i,j+1}});
           }
           
           if(i-1>=0 && visited[i-1][j]==false && grid[i-1][j]==1)
           {
               visited[i-1][j]=true;
                q.push({dist+1,{i-1,j}});
           }
           
           if(j-1>=0 && visited[i][j-1]==false && grid[i][j-1]==1)//error giving  macro "v" passed 2 arguments, but takes just 1
                                                                     /* vector<vector<int>> v(N, vector<int>(M)); */
           {
               visited[i][j-1]=true;
               q.push({dist+1,{i,j-1}});
           }

    }
    return -1;
 }         
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}