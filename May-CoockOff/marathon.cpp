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
          
          
          
          
int main(){
          
          int t;
          cin>>t;
          while(t--){
              int D,d,a,b,c;
              cin>>D>>d>>a>>b>>c;
              int x=D*d;
              if(x>=10 && x>0 && x<21) cout<<a<<endl;

              else if(x>=10 && x>=21 && x<=42) cout<<b<<endl;

              else if(x>=10 && x>=21 && x>=42) cout<<c<<endl;

              else cout<<0<<endl;
          }
          
return 0;
}