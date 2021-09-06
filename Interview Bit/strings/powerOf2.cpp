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
          
int power(string A){
    int n=A.length();
    int num=A[0]-'0';

    for(int i=1;i<n;i++){
        num=(num*10)+(A[i]-'0');
    }

    if(num==1) return 0;

    int power=log(num)/log(2);

    if(pow(2,power)==num) return 1;

    return 0;
    
    }          
          
          
int main(){
          
          
          
return 0;
}