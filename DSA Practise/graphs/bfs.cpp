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
#define pii pair<int, int>
#define vi vector<int>
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue <int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;

const int N= 1e5+2;
          
          
          
          
int main(){
          
          bool vis[N];
          vector<int> adj[N];
          queue<int> q;

          int n,m;
          cin>>n>>m;
          f(i,0,n){
              int x,y;
              cin>>x>>y;
              adj[x].push_back(y);
              adj[y].push_back(x);
          }
        
        q.push(1);
        vis[1]=true;
        
        while(!q.empty()){
          int node=q.front();

          q.pop();
          cout<<node<<endl;

          vector<int> ::iterator it;
          for(it=adj[node].begin();it<adj[node].end();it++){
            if(!vis[*it]){
              vis[*it]=1;
            q.push(*it);
            }
            
          }
        }

          
return 0;
}