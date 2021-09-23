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
          
void solve(){
    ll n,x,y,sum=0;cin>>n;
    vi v(n);
    f(i,0,n){
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    ll m;cin>>m;
    while(m--){
        cin>>x>>y;
        ll coin=0,c=0,s=0;
        vi ::iterator itr;
        itr=lower_bound(v.begin(), v.end(),x);
        ll ans;
        if(itr==v.end()){//if index at end
            ans=v[n-1];
            if(ans<x)coin=x-ans;

            s=sum-ans;
            if(s<y)coin+=y-s;
        }
        else{//else anywhere in array
            ans=v[itr-v.begin()];
            if(ans<x)coin=x-ans;

            s=sum-ans;
            if(s<y)coin+=y-s;
    if (itr - v.begin() != 0)
            {
                ans = v[itr - v.begin() - 1];
                if (ans < x)
                    c = x - ans;
                s = sum - ans;
                if (s < y)
                    c += y - s;
                coin = min(coin, c);
            }
            
        }
        cout<<coin<<endl;
    }
    }         
          
          
int main(){
          ll t;cin>>t;
          while(t--){
              solve();
          }
          
          
return 0;
}