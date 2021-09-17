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
          
vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long>st;
        vector<long long>ans(n,-1);
        st.push(arr[n-1]);
        for(int i=n-2;i>=0;i--){
            while(!st.empty() && arr[i]>st.top())st.pop();
            
            
            if(st.empty())ans[i]=-1;
            else ans[i]=st.top();
            
            st.push(arr[i]);
        }
         return ans;
}         
          
          
int main(){
          
          
          
return 0;
}