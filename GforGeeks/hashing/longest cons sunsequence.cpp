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
          
          

int solve(int arr[],int N){
    sort(arr,arr+N);
      int count=1,ans=1;                   
      
      for(int i=0;i<N-1;i++)
      {
          if(arr[i+1]==arr[i]+1)
          {
              count++;
              ans=max(ans,count);
          }
          else if(arr[i]==arr[i+1])
          continue;
          
          else     
          count=1;
      }
      return ans;
}        
//hashing
int findLongestConseqSubseq(int arr[], int N)
    {
    set<int> s;
      int res=0;
      
      for (int i = 0; i < N; i++)
        s.insert(arr[i]);
        
      for(int  i=0; i<N; i++){
          if(s.find(arr[i]-1) == s.end()){
              int curr=1;
              while(s.find(curr+arr[i]) != s.end())
                curr++;
                
            res=max(res, curr);
          }
      }
     return res;
    }

          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}