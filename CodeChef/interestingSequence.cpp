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
using namespace std;
          
          
ll gcd(ll n1, ll n2){
     while(n1 != n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    return n1;
}    

int calc(vector<ll> v){
    vector<ll> v2;
    ll ans;
    for(int i=0;i<v.size()-1;i++){
         ans=gcd(v[i],v[i+1]);
        v2.push_back(ans);
    }
    ans=0;

        for(int i=0;i<v2.size();i++){
        ans+=v2[i];
    }

    return ans;
}


          
int main(){
          ll t;
          cin>>t;
          while(t--){
              ll k;int c=0;
              vector<ll> v;
              cin>>k;
              ll i;
              for(i=1;i<=((2*k)+1);i++){
                  ll a=k+ pow(i,2);
                v.push_back(a);
              }
            cout<<calc(v)<<" ";

          }
          
          
return 0;
}