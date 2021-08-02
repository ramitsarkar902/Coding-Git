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
          
bool isPrime(long long x){
    int c=0;
    f(i,1,x){
        if(x%i==0) c++;
    }
    if(c==1) return true;

    return false;
}          
          
 long long primeProduct(long long L, long long R){
        // code here
        int product=1;
        f(i,L,R){
            if(isPrime(i)) product*=i;
        }

        return product;
    }         
          
int main(){
          
          primeProduct(1,10);
          
return 0;
}