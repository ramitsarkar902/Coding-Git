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
          
int spanningTree(int V, vector<vector<int>> adj[])
    {
       
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
        
        int source = 0;
        pq.push({0,source});
        
        int cost = 0;
        
        vector<bool> visited(V,false);
        
        pair<int,int> p;
        
        while(!pq.empty()){
            
            p = pq.top();
            pq.pop();
            
            if(visited[p.second] == true)
            continue;
            
            cost += p.first;
            
            visited[p.second] = true;
            
            int x = p.second;
            
            for(int i = 0; i < adj[x].size(); i++){
                
                if(!visited[adj[x][i][0]]){
                    
                    pq.push({adj[x][i][1],adj[x][i][0]});
                }
            }
        }
        
        return cost;
        
    }        
          
          
int main(){
          
          
          
return 0;
}