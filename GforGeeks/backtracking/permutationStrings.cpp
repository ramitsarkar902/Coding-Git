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
          
void solve(string &s,int x,int y,vector<string> &ans){

    if(x==y){
        ans.push_back(s);
        return;
    }

    for(int i=x;i<=y;i++){
        swap(s[x],s[i]);
        solve(s,x+1,y,ans);
        swap(s[x],s[i]);
    }
}   
          
vector<string> findPermu(string s){
    int n=s.length();
    vector<string>ans;
    solve(s,0,n-1,ans);
    sort(ans.begin(),ans.end());
    return ans;

}          
       
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}