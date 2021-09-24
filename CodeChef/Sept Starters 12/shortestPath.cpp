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
#define v(x) vector<x>
#define sortv(vec) sort(vec.begin(), vec.end())
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue <int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;
          
          
          
          
int main(){
    int t;cin>>t;
    while(t--){
        int n,m,x,y;cin>>n>>m>>x>>y;
        if(n>m)swap(n,m);

        int diff=m-n;

        ll first=x*(n+m-2);//2y>=x we dont move diagonally
        ll second=(y*(n-1)+(diff*x));//2x>y>x  move diagonal as much possible
        ll third=(y*(n-1)+((diff/2)/2)*y+(diff%2)*x);

        ll ans= min({first,second,third});
        cout<<ans<<endl;
    }
          
          
          
return 0;
}