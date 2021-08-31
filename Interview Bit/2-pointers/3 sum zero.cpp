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
          
vector<vector<int> > threeSum(vector<int> &A) {
    set<vector<int>> s;
    vector<vector<int>> ans;
    sort(A.begin(),A.end());
    
    long long int n=A.size(),i;
    
    for(i=0;i<n;i++)
    {
        long long int l=i+1;
        long long int r=n-1;
        
        while(l<r)
        {
            long long int sum=(long long int)A[i]+(long long int)A[l]+(long long int)A[r];
            
            if(sum==0)
            {
                s.insert({A[i],A[l],A[r]});
                l++;
                r--;
            }
            else if(sum>0)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    
    for(auto it=s.begin();it!=s.end();it++)
    {
        ans.push_back(*it);
    }
    
    return ans;
}         
          
          
int main(){
          
          
          
return 0;
}