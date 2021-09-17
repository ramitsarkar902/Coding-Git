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
          
vi solve(int arr[],int n){
    stack<int>s;
    vector<int>ans;
    s.push(0);
    ans.push_back(0);
    f(i,1,n){
        while(!s.empty() && arr[i]>=arr[s.top()])s.pop();

        ans.push_back(s.empty() ?(i+1):(i-s.top()));

        s.push(i);
    }
    return ans;
}         
          
          
int main(){
          
          
          
return 0;
}