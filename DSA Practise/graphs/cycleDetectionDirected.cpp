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
          

bool isCycle(int src,vector<vector<int>> &adj, vector<bool> &visited, vector<int> &stack){
    stack[src]=true;

    if(!visited[src]){
        visited[src]=true;
        for(auto i:adj[src]){
            if(!visited[i] and isCycle(i,adj,visited,stack)) return true;

            if(stack[i]) return true;
        }
    }

    return false;

}         
          
          
int main(){
          int n,m;cin>>n>>m;
            vector<vector<int>>adj(n);
            bool cycle=false;
        f(i,0,m){
            int x,y;cin>>x>>y;
            adj[x].push_back(y);
        }

        vector<bool> visited(n,false);
        vector<int> stack(n,0);
        f(i,0,n){ 
        
            if(!visited[i] and isCycle(i,adj,visited,stack)){
                cycle=true;
            }
        }

        if(cycle) cout<<"Cycle Present";

        else cout<<"no cycle";
          
          
return 0;
}