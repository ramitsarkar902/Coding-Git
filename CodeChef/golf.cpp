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
          int t,n,x,k;
          
          cin>>t;
          while(t--){
              int c=0;
              cin>>n>>x>>k;
              
              for(int i=0;i<(n+2);i++){
                  if(x%k==0 || x%k==((n+1)%k)){
                      c=1;
                      break;
                  }
                  }
                  if(c==1){ 
                      cout<<"Yes"<<endl;
                  }
                  else
                  cout<<"No"<<endl;


              }
          
          
          
return 0;
}