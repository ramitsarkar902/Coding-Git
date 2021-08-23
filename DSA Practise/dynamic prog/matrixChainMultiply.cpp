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
          
const int N=102;
int arr[N];
int dp[N][N];
          
int mcm(int i,int j){
    if(i==j) return 0;

    if(dp[i][j]!=-1) return dp[i][j];

    dp[i][j] =mod;

    for(int k=i;k<j;k++){
        dp[i][j] =min(dp[i][j],mcm(i,k)+mcm(k+1,j)+arr[i-1]*arr[k]*arr[j]);
    }

    return dp[i][j];
}         
int main(){
          int n;cin>>n;
          memset(dp,0,sizeof dp);
        f(i,0,n){
            cin>>arr[i];
        }

        cout<<mcm(1,n-1)<<endl;
          
          
return 0;
}