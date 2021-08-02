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
#define ll long long
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n+1],i,j;
	    priority_queue<int,vector<int>,greater<int>>pq;
	    for(i= 1;i<=n;i++)
	        cin>>arr[i];
	    for(i=1;i<=n;i*=2){
	        for(j=i;j<min(i*2,n+1);j++){
	            pq.push(arr[j]);
	        }
	        while(!pq.empty()){
	            cout<<pq.top()<<" ";
	            pq.pop();
	        }
	        cout<<endl;
	    }
	}
	return 0;
}