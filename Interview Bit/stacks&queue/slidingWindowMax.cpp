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
          
          
vi solve(vi &A,int b){
    int n=A.size();
    vi ans;
    deque<int>q;
    f(i,0,b){//first 3 elements
        while(!q.empty() && A[i]>=A[q.back()]) q.pop_back();

        q.push_back(i);
    }

    //remaining elememts
    f(i,b,n){
        ans.push_back(A[q.front()]);

        while(!q.empty() && q.front()<=i-b) q.pop_front();

         while(!q.empty() && A[i]>=A[q.back()]) q.pop_back();

        q.push_back(i);

    }
    ans.push_back(A[q.front()]);//insert the last window max
    return ans;
}         
          
int main(){
          vi arr = { 12, 1, 78, 90, 57, 89, 56 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    vi ans=solve(arr,k);
    for(auto i:ans){
        cout << i << endl;
    }
          
          
return 0;
}