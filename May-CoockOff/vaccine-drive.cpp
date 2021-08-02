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
          
          
int v[10];          
          
int main(){
    int t;
    cin>>t;
    while(t--){

        int g,p;
        cin>>g>>p;
        int sum=0;
        
          for(int i=0;i<10;i++){
            cin>>v[i];
          }
          for(int i=9;i>=g-1;i--){
              sum+=v[i];
              }
              int x=sum%p;
              if(x==0){
                  cout<<(sum/p)<<" "<<(sum/p)<<endl;
              }
              else{
                  cout<<(sum/p)<<" "<<(sum/p)+x<<endl;
              }


          }
    
          
          
return 0;
}