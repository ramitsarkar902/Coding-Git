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
          
          
string longestCommonPrefix(vector<string> &A) {
    int n=A.size();
    if(n==0)    return "";
    
    sort(A.begin(),A.end());
    
    string res;
    for(int i=0;i<A[0].size();i++){
        if(A[0][i]!=A[n-1][i]) return res;

        res+=A[0][i];
    }
    return res;
}         
          
int main(){
          
          
          
return 0;
}