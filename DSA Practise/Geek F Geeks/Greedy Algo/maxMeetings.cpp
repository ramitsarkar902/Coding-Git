
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
          
          
int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<pair<int,int>,int>> v;
            for(int i=0;i<n;i++){
                v.push_back({{start[i],end[i]},i+1});
            }

            sort(v.begin(),v.end(),[&](const pair<pair<int,int>,int> &a, const pair<pair<int,int>,int> &b){
                if(a.first.second !=b.first.second){
                return a.first.second < b.first.second;
                }

                return a.second<b.second;
            });

            int last=0,c=0;

            for(int i=0;i<n;i++){
                if(v[i].first.first>last){
                    c++;
                    last=v[i].first.second;
                }
            }

            return c;
    }         
          
int main(){
    //inputs
          //6
//1 3 0 5 8 5
//2 4 6 7 9 9
          
          
return 0;
}