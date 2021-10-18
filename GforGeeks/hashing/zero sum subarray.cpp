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
#include <unordered_map>
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
          
          
          
ll findSubarray(vector<ll> arr, int n ) {
        //code here
         long long sum=0;long long ans=0;
      unordered_map<long long,int>mp;
       for(int i=0;i<n;i++){
           sum+=arr[i];
          if(sum==0){
              ans++;
          }
        
          ans+=mp[sum];
          mp[sum]++;
       }
    
       return ans;

    }          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}