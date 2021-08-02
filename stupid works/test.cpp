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
          
      int n;cin>>n;
     vector<vector<int>> v;
     f(i,0,n){
       int start,end;
       cin>>start>>end;
       v.push_back({start,end});
     } 
     sort(v.begin(),v.end(),[&](vector<int> &a,vector<int> &b){
       return a[1]<b[1];
     });

  for(int i=0;i<n;i++){
    //for(int j=0;j<n;j++){
    cout<<v[i][1]<<"  ";
  //}
  }
    
          
return 0;
}
          
          
          
          
