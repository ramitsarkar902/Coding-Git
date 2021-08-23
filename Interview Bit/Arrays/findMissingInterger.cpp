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

//hard to understand
int firstMissingPositive(vector<int> &A) {          
sort(A.begin(),A.end());
    
      while(A[0]<=0 && (A.begin()!=A.end()) )
      {
         
          A.erase(A.begin());
      }
      if(!A.empty())
      {
        vector<int>::iterator it = unique(A.begin(),A.end());
        A.resize(distance(A.begin(),it));
        for(int i=0;i<A.size();++i)
        {
            if(A[i]!=i+1)
              return i+1;
        }
          
      }
      else
      return 1;   
}       

//easier
int firstMissingPositive(vector<int> &A) {
    int n=A.size();
    f(i,0,n){
        if(A[i]>0 && A[i]<n){
            int pos=A[i]-1;
            if(A[pos]!=A[i]){
                swap(A[pos],A[i]);
                i--;
            }
        }
    }
    for(int i=0;i<A.size();++i)
        {
            if(A[i]!=i+1)
              return i+1;
        }
          
      
      
      return -1;   
}
          
          
int main(){
          
          
          
return 0;
}