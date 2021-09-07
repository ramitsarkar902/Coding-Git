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
#define mod 1000000007 //10^9+7

#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
using namespace std;
          
ll power(long long a,ll b, ll c){
    ll x=1;
    a=a%c;
    if(a==0) return 0;
    
    while(b>0){
        if(b%2!=0)
            x=(x*a)%c;
        
        b=b>>1;
        a=(a*a)%c;
       }

       return x;
}
          
          
int main(){
          int t;
          cin>>t;
          while(t--){
              ll n;
              cin>>n;
              ll ans=power(2,n-1,mod);

              cout<<ans<<endl;
          }
          
          
return 0;
}
