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
          
 int canReach(int a[], int n) {
        // code here
        int dp[n];
        for(int i=0;i<n;i++)dp[i]=INT_MAX;

        
        dp[0]=0;
        if(n==0 ||a[0]==0) return 0;

        for(int i=0;i<n;i++){
            
            for(int j=0;j<i;j++){
                 if (i <= j + a[j] && dp[j] != INT_MAX) {
                dp[i] = min(dp[i], dp[j] + 1);
                break;
            }
        }

    }
    return dp[n-1];
 }       

 //approach 2
 int canReach(int A[], int N) 
    {
        if(A[0] == 0) return false;
        int maxReach = A[0];
        int step = A[0];
        int jump = 1;
        
        for(int i = 1; i < N - 1; i++)
        {
            maxReach = max(maxReach, A[i] + i);
            step--;
            if(step == 0)
            {
                jump++;
                if(i >= maxReach)
                    return 0;
                step = maxReach - i;
            }
        }
        return 1;
    } 
          
          
int main(){
          
          
          
return 0;
}