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
#define vi vector<int>
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue <int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;
          
          
          
          
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2 == 0){
            f(i,0,n){
                f(j,0,n){
                    cout<<-1<<" ";
                }
                cout<<endl;
            }
        }else{
            f(i,0,n){
                f(j,0,n){
                    if(i==j) cout<<1<<" ";
                    else cout<<-1<<" ";
                }
                cout<<endl;
            }
        }
    }
          
          
          
return 0;
}