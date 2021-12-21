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
          
          
          
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code here
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>ans(n,vector<int>(m,0));
        queue<pair<int,pair<int,int>>>q;
        for(int i = 0; i < n ; i ++){
            for(int j= 0; j < m; j++){
                if(grid[i][j]==0)ans[i][j]=INT_MAX;
                else q.push({0,{i,j}});//storing the distance and also the position(i,j);
            }
        }

        int dx[] = {-1, 0, +1, 0};
	    int dy[] = {0, +1, 0, -1};
        while(!q.empty()){
            int x=q.front().second.first;
            int y= q.front().second.second;
            int dist=q.front().first;

            q.pop();
            for(int i=0;i<4;i++){
                int newX=x+dx[i];
                int newY=y+dy[i];
                if(newX<n && newY<m && newX>=0 && newY>=0 && 1+dist<ans[newX][newY]){
                    ans[newX][newY]=1+dist;
                    q.push({1+dist,{newX,newY}});
                }
            }
        }
    return ans;
	}         
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}