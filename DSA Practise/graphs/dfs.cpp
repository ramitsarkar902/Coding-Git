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

const int N=1e5+2;

bool vis[N];
vector<int>adj[N];

void dfs(int node){
    //preorder print
    vis[node]=1;
    cout<<node<<" ";

    //inorder 
    vector<int> ::iterator it;
    for(it=adj[node].begin();it!=adj[node].end();it++){
        if(!vis[*it]){
            dfs(*it);
        }
    }
    cout<<endl;
    //postorder print
    cout<<node<<" ";
}          
          
          
int main(){

    int n,m;
          cin>>n>>m;

        for(int i=0;i<=n;i++){
            vis[i]=false;
        }
          
          
          f(i,0,n){
              int x,y;
              cin>>x>>y;
              adj[x].push_back(y);
              adj[y].push_back(x);
          }
          
return 0;
}
