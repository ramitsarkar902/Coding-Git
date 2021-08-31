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
          
          
int minimize(const vector<int> &a, const vector<int> &b, const vector<int> &c) {
     int minimum = INT_MAX;
        int maximum = INT_MIN;
        int diff=INT_MAX;
        int i, j, k;
    for( i=0,j=0,k=0;i < a.size() && j < b.size() && k < c.size();){
         minimum = min(a[i], min(b[j], c[k]));
            maximum = max(a[i], max(b[j], c[k]));
            diff = min(diff, maximum - minimum);
            if (diff == 0) break;
            if (a[i] == minimum) i++;
            else if (b[j] == minimum) j++;
            else k++;
        }
        return diff;
    }

         
          
int main(){
          
          
          
return 0;
}