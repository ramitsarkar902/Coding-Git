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
          
int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr + n);
        int min_e, max_e;
        int res = arr[n - 1] - arr[0];
        for (int i = 1; i <= n - 1; i++)
        {
            max_e = max(arr[i - 1] + k, arr[n - 1] - k);
            min_e = min(arr[0] + k, arr[i] - k);
            res = min(res, max_e - min_e);
        }
        return res;
        }          
          
          
int main(){
          /* K = 3, N = 5
Arr[] = {3, 9, 12, 16, 20}
Output:
11
Explanation:
The array can be modified as
{6, 12, 9, 13, 17}. The difference between 
the largest and the smallest is 17-6 = 11.  */
          
          
return 0;
}