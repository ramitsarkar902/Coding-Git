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
          
vector<vi> solve(int n){
    if(n==0) return{};
     vector<vector<int>>ans(n);
    ans[0].push_back(1);
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            ans[i].push_back(ans[i-1][j]+ans[i-1][j-1]);
        }
        ans[i].push_back(1);
    }

    return ans;
}          
          
          
int main(){    
          
          
return 0;
}