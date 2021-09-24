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
#define v(x) vector<x>
#define sortv(vec) sort(vec.begin(), vec.end())
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue <int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;
#define inf 1000000000000000000
          
int function(int src,vector<int> adj[],int p,int arr[],int memo[][2],int status)
{
	int count=0;
	for(int x:adj[src])
	{
		if(x!=p)
		  count++;
	}
	if(count==0)
	   return 0;
	if(memo[src][status]!=-1)
	  return memo[src][status];
	else
	{
		if(status==0)
		{
			int val=inf;
			for(int x:adj[src])
			{
				if(x!=p)
				{
					int here=arr[x]+function(x,adj,src,arr,memo,1);
					val=min(val,here);
				}
			}
			memo[src][status]=val;
			return val;
		}	
		else
		{
			int val=-inf;
			for(int x:adj[src])
			{
				if(x!=p)
				{
					int here=arr[x]+function(x,adj,src,arr,memo,0);
					val=max(val,here);
				}
			}
			memo[src][status]=val;
			return val;
		}
	}
}
int32_t main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int j,arr[n+1];
		for(j=1;j<=n;j++)
		  cin>>arr[j];
		vector<int> adj[n+1];
		for(j=0;j<n-1;j++)
		{
			int x,y;
			cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		int memo[n+1][2];
		int i;
		for(i=0;i<=n;i++)
		{
			for(j=0;j<2;j++)
			   memo[i][j]=-1;
		}
		int answer=function(1,adj,-1,arr,memo,0);
		cout<<answer<<endl;
	}
}