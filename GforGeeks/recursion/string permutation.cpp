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

void solve(vector<string> &ans,string str,int i,int n) {

    if(i==n-1){
        ans.push_back(str);
        return;
    }
   for (int j = i; j < n; j++)
        {
          
            swap(str[i], str[j]);       
    
            
            solve(ans,str, i + 1, n);
    
            
            swap(str[i], str[j]);
        }


}         
vector<string> permutation(string S)
    {
        //Your code here
        vector<string> ans;
        solve(ans,S,0,S.size());
        return ans;

    }          
          
          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}