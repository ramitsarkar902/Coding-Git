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


bool find(int *arr,int n,int b){
    for(int i=0;i<n;i++){

        if(b==arr[i])return true;

    }
    return false;
}
          
//using prefix sum 


int solve(int N){
   double a;
int n=2,c=0;

while(2*N - n*n + n > 0)
{
if( (2*N + n - n*n) % (2*n) == 0)
c++;

n+=1;
}

return c;
}
          
          
int main(){
          
          cout<<solve(15);
          
return 0;
}