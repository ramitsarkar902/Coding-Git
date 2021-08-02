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
using namespace std;
          
bool compare(pii p1, pii p2){
    double one=(double)p1.first/p1.second;
    double two=(double)p2.first/p2.second;

    return one>two;
}          
          
          
int main(){
        vector<pii> v;
    int n;
    cin>>n;
    f(i,0,n){
        cin>>v[i].first>>v[i].second;
    }
          
    sort(v.begin(),v.end(), compare);
    int w;cin>>w;
    int ans=0;
    f(i,0,n){
        if(w>=v[i].second){
            ans+=v[i].first;
            w-=v[i].second;
            continue;
        }
        double vw=(double)v[i].first/v[i].second;
        ans+=vw*w;
        w=0;
        break;
    }
          
     cout<<ans<<" ";

return 0;
}