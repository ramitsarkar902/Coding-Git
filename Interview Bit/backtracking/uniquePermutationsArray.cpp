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

bool isValid(int start,int i,vector<int>& a){
    for(int j=start;j<i;j++){
        if(a[i]==a[j])return true;
    }
    return false;
}    


/* void swap(vector<int> &a,int i,int j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    } */
    
          
void solve(vector<int> &a,int start,vector<int> &curr,vector<vector<int>> &ans){

    if(start==a.size()){
        ans.push_back(curr);
        return;
    }
    
   for(int i=start; i <a.size(); i++){
        if(isValid(start,i,a))continue;
        
        curr.push_back(a[i]);
        swap(a[i],a[start]);
        solve(a,start+1,curr,ans);
        swap(a[i],a[start]);

        curr.pop_back();
    }
} 

vector<vector<int> > permute(vector<int>&a){
    sort(a.begin(), a.end());
    vector<int> curr;
    vector<vector<int> > ans;
    solve(a,0,curr,ans);
    return ans;
}         
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}