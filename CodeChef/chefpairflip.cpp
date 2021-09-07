#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll min(ll a,ll b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("inpit.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ll t;
    cin>>t;
    while(t--){
        ll  n,m,k;
        cin>>n>>m>>k;
        ll  a[n+1][m+1];
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(i==0 ||j==0){
                    a[i][j]=0;
                }
                else{
                cin>>a[i][j];
                }
            }
        }
      for(ll i=0;i<=n;i++){
          double p=0;
          for(ll j=0;j<=m;j++){
              a[i][j]+=p;
              p=a[i][j];
              
          }
      }
        for(ll j=0;j<=m;j++){
           double p=0;
            for(ll i=0;i<=n;i++){
                a[i][j]+=p;
                p=a[i][j];
            }
        }
        ll minimum=min(n,m);
        ll val=0;
        for(ll len=1;len<=minimum;len++) {
            for(ll i=len;i<=n;i++){
                for(ll j=len;j<=m;j++){
                    if((a[i][j]+a[i-len][j-len]-a[i][j-len]-a[i-len][j])/(len*len)>=k){
                        val++;
                    }
                }
            }
        }
        cout<<val<<endl;
    }
    return 0;
}