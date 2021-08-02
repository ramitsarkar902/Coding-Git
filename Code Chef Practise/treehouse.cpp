
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <deque>
#include <list>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <string.h>
//#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define int long long
          
const int mod=1e9+7;          
vector<vector<int>> tree;
vector<int> subval,val;
vector<pair<int,int>> ch;

void calc(int now,int last){
    for(auto x:tree[now]){
        if(x==last) continue;
        calc(x,now);
    }
    ch.clear();
    for(auto x:tree[now]){
        if(x!=last) ch.push_back({subval[x],x});
    }
    
    sort(ch.rbegin(),ch.rend());
    int count=1;
    for(auto [temp,id]:ch) val[id]+=count++;

    for(auto x:tree[now]){
        if(x!=last){
            subval[now]+=val[x]*subval[x];
        }
    }
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        
        subval.assign(n,1);
        val.assign(n,0);
        tree.clear();
        tree.resize(n);
        while(n-->1){
            int u,v;
            cin>>u>>v;
            u--,v--;
            tree[u].push_back(v);
            tree[v].push_back(u);
        }
        calc(0,-1);
        cout<<subval[0]%mod*x%mod<<endl;
            }

            return 0;
}
