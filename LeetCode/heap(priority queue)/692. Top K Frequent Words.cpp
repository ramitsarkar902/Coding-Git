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
#define pqmax priority_queue<int>
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

struct Compare{
    bool operator()(const pair<string, int>& a, const pair<string, int>& b){
        if(a.second!=b.second){
            //sort in decreasing frequency
            return a.second>b.second;
        }
        else{
            //sort smaller lexicographically
            return a.first<b.first;
        }
    }

};

  vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        for(auto w:words)
        {
            mp[w]++;
        }
        priority_queue<pair<string,int>,vector<pair<string,int>>,Compare>pq;
        for(auto i:mp){
            pq.push(make_pair(i.first,i.second));
            if(pq.size()>k){
                pq.pop();
            }

        }

        vector<string>ans;
        for(int i=0;i<k;i++){
             ans.insert(ans.begin(),pq.top().first);
            pq.pop();
        }
        return ans;
    }         
          
          
int main(){
          
          
          
return 0;
}