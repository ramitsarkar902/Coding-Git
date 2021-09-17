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
          
          
vector<int> prevSmaller(vector<int> &a) {
    int n=a.size();
    stack<int>s;
    vector<int>ans;
    ans.push_back(-1);
    s.push(a[0]);

    for(int i=1;i<n;i++){
        if(a[i]>s.top()){
            ans.push_back(s.top());
            s.push(a[i]);
        }
        else{
            while(!s.empty() && a[i]<=s.top()) s.pop();

            if(s.empty()) ans.push_back(-1);
            else ans.push_back(s.top());
            s.push(a[i]);

            
        }
    }
    return ans;
}         
          
int main(){
          
          
          
return 0;
}