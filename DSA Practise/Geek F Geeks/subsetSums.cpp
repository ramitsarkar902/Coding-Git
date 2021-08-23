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

//there are two options 
//a.Take the element -solve(arr,N,ans,i+1,sum+arr[i]);
//b.leave the element  - solve(arr,N,ans,i+1,sum);        

void solve(vector<int> arr,int N,vector<int> &ans,int i,int sum)
{
if(i>N-1)
{
ans.push_back(sum);
return;
}
solve(arr,N,ans,i+1,sum+arr[i]);
solve(arr,N,ans,i+1,sum);
}
vector<int> subsetSums(vector<int> arr, int N)
{
// Write Your Code here
vector<int>ans;
int c=0;
solve(arr,N,ans,0,c);
sort(ans.begin(),ans.end());
return ans;
}         
          
          
int main(){
          /* Input:
N = 2
arr[] = {2, 3}
Output:
0 2 3 5
Explanation:
When no elements is taken then Sum = 0.
When only 2 is taken then Sum = 2.
When only 3 is taken then Sum = 3.
When element 2 and 3 are taken then 
Sum = 2+3 = 5. */
          
          
return 0;
}