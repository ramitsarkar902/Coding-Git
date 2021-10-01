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
          
          
bool solve(vector<int> &arr,int n,int i){
    
   
        for(int j=i;j<n;j++){
            if((arr[i]*arr[j])%(i*j)==0){
                return true;
            }
        }
        return false;
    
}

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int c=0;
	   vector<int>arr(n+1,0);
	    arr[0]=0;	    
	    for(int i=1;i<n;i++){
	        cin>>arr[i];
	    }
	     for(int i=0;i<n;i++){
	        if(solve(arr,n,i))c++;
	     }
	     cout<<n<<endl;
	}
	return 0;
}
