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
    int t,x,a,b;
    cin>>t;
    while(t--){
        cin>>x>>a>>b;
        int res=(a+((100-x)*b))*10;
        cout<<res<<endl;
    }
          
          
          
return 0;
}