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
          
          
void solve(vector<int> &a,int sum,vector<vector<int>> &res,vector<int> &curr,int i){

    if(sum==0){
        res.push_back(curr);
        return;
    }

    while(i<a.size() && sum-a[i]>=0){
        curr.push_back(a[i]);

        solve(a,sum-a[i],res,curr,i);
        i++;

        curr.pop_back();
    }
}         
          
          
vector<vector<int>>combinationalSum(vector<int>&candidates,int target){
    vector<vector<int>> res;
    vector<int> curr;
    sort(candidates.begin(),candidates.end());
    candidates.erase(unique(candidates.begin(),candidates.end()),candidates.end());
    solve(candidates,target,res,curr,0);
    return res;
}         
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}