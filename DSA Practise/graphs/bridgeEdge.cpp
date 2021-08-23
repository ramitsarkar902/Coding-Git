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
          
void dfs(vector<int> adj[] , vector<int> &visit , int n){
        visit[n] = 1;
        for(auto it : adj[n]){
            if(visit[it] == 0){
                dfs(adj , visit , it);
            }
        }
    }
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        // Code here
         int comp1 = 0;
        vector<int> visit1(V , 0);
        for(int i = 0 ; i < V ; i++){
            if(visit1[i]==0){
                comp1++;
                dfs(adj , visit1 , i);
            }
        }

        int ind;
        for(int i = 0 ; i < adj[c].size() ; i++){
            if(adj[c][i] == d){
                ind = i;
                break;
            }
        }
        adj[c].erase(adj[c].begin() + ind);

        for(int i = 0 ; i < adj[d].size() ; i++){
            if(adj[d][i] == c){
                ind = i;
                break;
            }
        }
        adj[d].erase(adj[d].begin() + ind);

        int comp2 = 0;
        vector<int> visit(V , 0);
        for(int i = 0 ; i < V ; i++){
            if(visit[i]==0){
                comp2++;
                dfs(adj , visit , i);
            }
        }

        return !(comp1 == comp2);
    }        
          
          
int main(){
          
          
          
return 0;
}