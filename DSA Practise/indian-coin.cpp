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
          
          
          
          
int main(){
          
 int n;
 cin>>n;
 vector<int> v;
 f(i,0,n)
 cin>>v[i];

 int x;
 cin>>x;

 sort(v.begin(),v.end(),greater<int>());
int ans=0;
f(i,0,n){
    ans+=x/v[i];
    x-=x/v[i]*v[i];
}          

cout<<ans<<endl;

return 0;
}