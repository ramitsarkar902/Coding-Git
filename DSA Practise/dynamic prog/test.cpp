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
          
          
          
          
int main(){
char s[]="ADMONISH";
int n=6,c=0,i=0;while(n>1){
    i+=c;
    while(i>=n) i=i%n;

    for(int j=0;j!=i;j++);
    for(int j=i;j<n-1;j++) s[j]=s[j+1];

    if(n-1==i) i--;

    n--;
    c++;
}

cout<<" "<<" "<<s[0]<<s[1];
          
          
          
return 0;
}