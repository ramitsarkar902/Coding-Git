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
          
int solve(vi &a,int b){
    sort(a.begin(),a.end());
    int high=0,low=0,ans,n=a.size();
    high=a[n-1];
    while(high>=low){
        long long int mid=(high+low)/2;
        int sum=0;
        f(i,0,n){
            if(a[i]>mid) sum+=a[i]-mid;

            if(sum>b){
                ans=mid;
                low=mid+1;
            }
            else if(sum < b)
        high = mid-1;
        else
        return mid;
        }
    }
    return ans;
}        
          
/* int solve(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int hi = 0,ans, n = A.size();
    hi=A[A.size()-1];
    int lo = 0;
    while(lo <= hi)
    {
        long long int mid = (lo+hi)/2,sum = 0;
        for(int i = 0; i < n; i++)
        if(A[i] > mid)
        sum += A[i] - mid;
        if(sum > B)
        {
            ans = mid;
            lo = mid+1;
           
        }
        else if(sum < B)
        hi = mid-1;
        else
        return mid;
    }
    return ans;
} */
          
int main(){
          vi a={20,15,10,17};
          cout<<solve(a,7);
          
          
return 0;
}