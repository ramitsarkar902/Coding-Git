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
          
          
          
return 0;
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a,b,c,m;
        cin>>a>>b>>c>>m;
        v(int) v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sortv(v);
        ll sum=a+b+c-3;
 
        if((v[2]-v[1]-v[0]-1)<=m && m<=sum) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}