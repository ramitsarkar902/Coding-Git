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
          
          
          
v(v(int)) solve(v(int) &a,int b){
    vector<vector<int>>ans;
    unordered_map<int,vector<pair<int,int>>>mp;
    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            int sum=a[i]+a[j];
            int k=b-sum;//required sum
            if(mp.find(k)!=mp.end()){
                vector<pair<int,int>> v=mp[k];
                for(int x=0;x<v.size();x++){
                     if(i!=v[x].first && i!=v[x].second && j!=v[x].first && j!=v[x].second){
                    vector<int> temp={a[i],a[j],a[v[x].first],a[v[x].second]};
                    sort(temp.begin(),temp.end());
                    ans.push_back(temp);
                     }
                }

            }
            mp[sum].push_back(make_pair(i,j));
        }
    }
     sort(ans.begin(),ans.end());
    vector<vector<int>>:: iterator it = unique(ans.begin(), ans.end());//for unique combinations only
    ans.resize(distance(ans.begin(), it));
    
    return ans;
}          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}