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
          
          
bool modCheck(int a, int b, int c){
    int x=c%a;
    int y=c%b;
    if(x%b == y%a){
         return true;
    }
    else
    return false;
}        
int pairs(int p, int q){
    int c=0;
    for(int i=1;i<=p;i++){
                  for(int j=i+1;j<=p;j++){
                      if(modCheck(i,j,q)==true){
                          c++;
                      }
                  }
              }

              return c;
}        
int main(){
          int t,m,n;
          cin>>t;
          while(t--){
              cin>>m>>n;
              
              cout<<pairs(m,n)<<endl;
          }
          
return 0;
}