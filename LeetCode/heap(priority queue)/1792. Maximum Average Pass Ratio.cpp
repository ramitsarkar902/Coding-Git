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
          
 double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<double,pair<int,int>>>pq;
        for(auto i:classes) {
            double avg=((double)i[0]+1)/((double)i[1]+1)-((double)i[0]/(double)i[1]);
            pq.push({avg,{i[0],i[1]}});
        }
        while(extraStudents--){
            pair<double,pair<int, int>>p=pq.top();
            pq.pop();
             int u=p.second.first + 1;
            int v=p.second.second + 1;
            double growth1=(double)(u + 1)/(double)(v + 1) - (double)(u)/(double)(v);
            pq.push({growth1,{u,v}});
        }
        double ans=0.0;
        while(!pq.empty()){
            pair<double,pair<int, int>>p=pq.top();
            pq.pop();
            ans+=(double)(p.second.first)/(double)(p.second.second);
        }

        return ans/classes.size();
    }          
          
          
int main(){
          
          
          
return 0;
}