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
          
const int inf=1e7;         
          
          
int main(){
          int n,m;cin>>n>>m;
          vi dist(n+1,inf);

        vector<vector<pair<int,int>>> graph(n+1);
        f(i,0,m){
            int u,v,w;cin>>u>>v>>w;
            graph[u].push_back({v,w});
            graph[v].push_back({u,w});

        }

        int src;cin>>src;
        dist[src]=0;
        set<pair<int,int>> s;
        s.insert({0,src});
        while(!s.empty()){
            auto x=*(s.begin());
            s.erase(x);
            for(auto i:graph[x.second]){
                if(dist[i.first]>dist[x.second]+i.second){
                    s.erase({dist[i.first],i.first});
                    dist[i.first]=dist[x.second]+i.second;
                    s.insert({dist[i.first],i.first});
                }
            }
        }

        f(i,1,n){
            if(dist[i]<inf) cout<<dist[i]<<" ";

            else cout<<-1<<" ";
        }
          
return 0;
}