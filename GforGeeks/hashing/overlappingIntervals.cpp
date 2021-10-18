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
          
          
vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         vector<pair<int,int>> p;
         int n=intervals.size();
         f(i,0,n){
             vector<int>temp=intervals[i];
             p.push_back(make_pair(temp[0],temp[1]));
         }
         sort(p.begin(), p.end());
     vector<pair<int, int> > ans;
        ans.push_back({p[0].first, p[0].second});
        int len = 1;
        for(int i=1; i<p.size(); i++){
            if(p[i].first > ans[len - 1].second){
                ans.push_back({p[i].first, p[i].second});
                len += 1;
            }else{
                ans[len - 1].second = max(p[i].second, ans[len - 1].second);
            }
        }
        vector<vector<int> > res(ans.size());
        for(int i=0; i<ans.size(); i++){
            res[i].push_back(ans[i].first);
            res[i].push_back(ans[i].second);
        }
        return res;
         }

//another approach 
vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         vector<vector<int>> mergedIntervals;
       if(intervals.size()==0)
           return mergedIntervals;
       sort(intervals.begin(), intervals.end());
       vector<int> tempInterval = intervals[0];
       for(auto it: intervals )
       {
           if(it[0] <= tempInterval[1])
               tempInterval[1] = max(it[1], tempInterval[1]);
           else
           {
               mergedIntervals.push_back(tempInterval);
               tempInterval = it;
           }
               
       }
       mergedIntervals.push_back(tempInterval);
       return mergedIntervals;
         
    }
         
              
          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}