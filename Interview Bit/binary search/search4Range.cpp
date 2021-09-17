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

vector<int> searchRange(const vector<int> &A, int B) {   

    int n=A.size();
    vector<int> ans(2,-1);
    int low=0,high=n-1,mid;
    while(low<high){
        mid=(low+high)/2;
        if(A[mid]<B)low=mid+1;
        else high=mid;
    }
     if(A[low]!=B)
        return ans;
    else
        ans[0]=low;
    high=n-1;

     while(low<high){
        mid=(low+high)/2 + 1;
        if(A[mid]>B)
            high=mid-1;
        else
            low=mid;
    }
    ans[1]=high;
    return ans;
}       

          
          
int main(){
         
          
          
return 0;
}