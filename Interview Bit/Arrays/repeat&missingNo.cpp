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
          
vector<int> repeatedNumber(const vector<int> &A) {
    long n=A.size();
vector<long> B(n+1,0);
for(long i=0;i<A.size();i++){
    B[A[i]]++;
}
long num,nummis;
for(long i=1;i<=A.size();i++){
    if(B[i]==2)num=i;
    if(B[i]==0)nummis=i;
}
vector<int> result{num,nummis};
return result;
}         
          
          
int main(){
          
          
          
return 0;
}