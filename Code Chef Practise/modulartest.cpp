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

#define ll long long

              
#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
using namespace std;
          
          
          
          
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll m,n;
        cin>>n>>m;
        ll count=0;
        vector<long long> mod(n+1,1);
        for(ll a=2;a<=n;a++){
            ll x=m%a;
            count+=mod[x];
            for(ll b=x;b<=n;b+=a){
                mod[b]++;
            }
        }
        cout<<count<<endl;
    }
          
          
          
return 0;
}