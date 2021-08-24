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
#define vi vector<int>
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue <int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;
          
struct Interval {
      int start;
      int end;
      Interval() : start(0), end(0) {}
      Interval(int s, int e) : start(s), end(e) {}
  };          

vector<Interval>merge(vector<Interval> &intervals){
    sort(intervals.begin(), intervals.end(),[&](Interval a, Interval b){
        return a.start < b.start;
    });

    if(intervals.size()<2) return intervals;

    int first=0;
     f(second,intervals.size(),second++){
         if(intervals[second].start<=intervals[first].end){
             intervals[first].end=max(intervals[first].end,intervals[second].end);
         }
         else{
             first++;
            intervals[first].start=intervals[second].start;
            intervals[first].end=intervals[second].end;
         }

     }
     intervals.erase(intervals.begin() + first + 1, intervals.end());
            return intervals;
}
          
          
int main(){
          
          
          
return 0;
}