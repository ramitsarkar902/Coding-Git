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
#include<unordered_map>

#define ll long long
#define mod 1000000007 //10^9+7
              
#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
#define f(i,a,b) for(int i=a;i<b;i++)
#define fm(i,a,b) for(int i=a;i>b;i--)
#define pii pair<int, int>
#define v(x) vector<x>
#define sortv(vec) sort(vec.begin(), vec.end())
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue <int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;
          
          
          
          
          
          
//for linked list          
struct Node
{
int data;
struct Node *next;
 Node(int x)
{
data = x;
 next = NULL;
 }
};
          
          
int dp[1000][1000];
int solve(int arr[],int x,int y){

    if(x>y)return 0;
    if(dp[x][y]!=-1)return dp[x][y];
    int hm=max(arr[x]+min(solve(arr,x+1,y-1),solve(arr,x+2,y)),arr[y]+min(solve(arr,x+1,y-1),solve(arr,x,y-2)));

    return dp[x][y]=hm;
}   


bool is1winner(int N, int arr[]) {
int ans = 0;
memset(dp, -1, sizeof(dp));
for (int i = 0; i < N; i++)
ans += arr[i];

int ans2 = solve(arr, 0, N - 1);
return ans2 > (ans - ans2);

}
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}