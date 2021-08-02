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
#define vi vector<int>
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue <int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;
          
          
          
          
int main(){
          int t;cin>>t;
          stack<int> st,temp;
          while(t--){
              int x,y;
              cin>>x;
              if(x==1){
                  cin>>y;
                st.push(y);
                if(temp.empty()){
                    temp.push(y);
                }
                else{
                    if(y>temp.top()) temp.push(y);

                    else temp.push(temp.top());
                }
              }
              else if(x==2){
                  temp.pop();
                  st.pop();
              }
              else{
                  cout<<temp.top()<<endl;
              }
          }
          
          
return 0;
}