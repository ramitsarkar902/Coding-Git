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

#define ull unsigned long long
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
          
          
ull getNthUglyNo(int n) {
	    ull ugly[n]; // To store ugly numbers
		
	    ull i2 = 0, i3 = 0, i5 = 0;
	    ull next_multiple_of_2 = 2;
	    ull next_multiple_of_3 = 3;
	    ull next_multiple_of_5 = 5;
	    ull next_ugly_no = 1;

	    ugly[0] = 1;
	    for (int i = 1; i < n; i++) {
	        next_ugly_no = min(next_multiple_of_2,
	                           min(next_multiple_of_3, next_multiple_of_5));
	        ugly[i] = next_ugly_no;
	        if (next_ugly_no == next_multiple_of_2) {
	            i2 = i2 + 1;
	            next_multiple_of_2 = ugly[i2] * 2;
	        }
	        if (next_ugly_no == next_multiple_of_3) {
	            i3 = i3 + 1;
	            next_multiple_of_3 = ugly[i3] * 3;
	        }
	        if (next_ugly_no == next_multiple_of_5) {
	            i5 = i5 + 1;
	            next_multiple_of_5 = ugly[i5] * 5;
	        }
	    } /*End of for loop (i=1; i<n; i++) */
	    return next_ugly_no;
	}
          
int main(){
          int n=11;
          cout<<getNthUglyNo(n);
          
          
return 0;
}