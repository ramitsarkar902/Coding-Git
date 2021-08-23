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
          
vector <int> bellman_ford(int V, vector<vector<int>> adj, int S) {
        // Code here
        
    vector<int> dist(V, 100000000);
        
        dist[S] = 0;
        
        for(int i = 0; i < V-1; i++)
        {
            bool notUpdate = true;
            
            for (auto edge : adj)
            {
                int u = edge[0];
                int v = edge[1];
                int weight = edge[2];
                
                
                if(dist[v] > dist[u] + weight)
                {
                    dist[v] = dist[u] + weight;
                    
                    notUpdate = false; 
                }
            }
            
            if(notUpdate)
            {
                break;
            }
        }
        
        return dist;
    }
          
          
int main(){
          
          
          
return 0;
}