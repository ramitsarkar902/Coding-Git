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
          
          
          
          
vector<int> solve(vector<int> &A, vector<int> &B, vector<int> &C) {

 sort(A.begin(),A.end());sort(B.begin(),B.end());sort(C.begin(),C.end());
    unordered_map<int,int>mp;vector<int>ans;
    for(int i=0;i<A.size();i++){
        mp[A[i]]++;
        while(A[i]==A[i+1]){

            i++;
        }
    }
    for(int i=0;i<B.size();i++){
        mp[B[i]]++;
        while(B[i]==B[i+1]){

            i++;
        }
    }
    for(int i=0;i<C.size();i++){
        mp[C[i]]++;
        while(C[i]==C[i+1]){

            i++;
        }
    }
    for(auto x:mp){
        if(x.second>=2)ans.push_back(x.first);
    }
    sort(ans.begin(),ans.end());
    return ans;
}
        
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}