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
          
const int N=1e5+6;
vector<int> parent(N);
vector<int> size(N);          

void make_set(int x){
    parent[x]=x;
    size[x]=1;
}
          
int find_set(int x){
    if(x==parent[x]) return x;

    return parent[x]=find_set(parent[x]);
}
          
void union_sets(int a,int b){

    int x=find_set(a);
    int b=find_set(b);
    if(a!=b){
        if(size[a]<size[b]) swap(a,b);
        parent[b]=a;
        size[a]+=size[b];
    }
}
          
int main(){
          f(i,0,N){
              make_set(i);
          }
        vector<vi> edges;
          int n,m;
          cin>>n>>m;
          f(i,0,m){
              int u,v,w;
              cin>>u>>v>>w;
              edges.push_back({w,u,v});

          }
    sort(edges.begin(),edges.end());

    int cost=0;
    for(auto i:edges){
        int w=i[0];
        int u=i[1];
        int v=i[2];
        int x=find_set(u);
        int y=find_set(v);
        if(x==y){
            continue;
        }
        else{
            cout<<u<<" "<<v<<endl;
            union_sets(u,v);
            cost+=w;
        }
    }
          
          
return 0;
}