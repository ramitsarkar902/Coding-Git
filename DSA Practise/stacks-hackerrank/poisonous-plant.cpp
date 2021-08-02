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
          int n;cin>>n;
          stack<pair<int,int>>st;
          vector<pair<int,int>>temp;
          int maxa=INT_MIN;
          while(n--){
              int x;cin>>x;
            if(st.empty()) st.push({x,0});
            else{
                int y=st.top().first;
                
                if(x<y){
                    int sc=1;
                    maxa=max(maxa,sc);
                    st.push({x,sc});
                }
                else{
                    int v=st.top().first;
                    int c=st.top().second;
                    while(!st.empty()&&v<=x){
                        st.pop();
                        if(st.empty()) break;

                        c=max(c,st.top().second);
                        v=st.top().first;
                    }
                    if(st.empty()){
                        st.push({x,0});

                    }
                    else{
                        st.push({x,c+1});
                        maxa=max(maxa,c+1);
                    }
                }
            }
          }

          cout<<maxa<<endl;
          
return 0;
}