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
          
int maximumGap(const vector<int> &A) {
    if(A.size()<2)
    return 0;
    
    int diff=0;
    int i;
    int max=0;
    
    vector<int>*temp=(vector<int>*)&A;
    sort(temp->begin(),temp->end());
    
    
    
    for(i=0;i<A.size()-1;i++)
    {
        diff=A[i+1]-A[i];
        
        if(max<diff)
        max=diff;
    }
    return max;
}         
          
          
int main(){
          
          
          
return 0;
}