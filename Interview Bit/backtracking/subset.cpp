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
          
void solve(v(int)&A,v(v(int))&res,v(int)&subset,int index){
    res.push_back(subset);
    f(i,index,A.size()){
        subset.push_back(A[i]);

        solve(A,res,subset,i+1);

        subset.pop_back();
    }
    return;
}

vector<vector<int> > subsets(vector<int> &A) {
    sort(A.begin(), A.end());
   v(v(int))res;
   v(int)subset;

   int i=0;
   solve(A,res,subset,i);

 
    return res;
}      
          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}