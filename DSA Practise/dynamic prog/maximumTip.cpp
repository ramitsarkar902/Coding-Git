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
#define f(i, a, b) for (int i = a; i < b; i++)
#define fm(i, a, b) for (int i = a; i > b; i--)
#define pii pair<int, int>
#define vi vector<int>
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue<int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;

long long maxTip(int a[], int b[], int n, int x, int y) {
        vector<vector<int>> v(n);
        for (int i = 0; i < n; i++) {
            vector<int> vv(3);
            vv[0] = a[i], vv[1] = b[i], vv[2] = abs(a[i] - b[i]);
    
            v[i] = vv;
        }
        sort(v.begin(), v.end(), [&](vector<int> &a, vector<int> &b){
            return a[2]>b[2];
        });
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            if (x == 0) {
                ans += v[i][1];
            } else if (y == 0) {
                ans += v[i][0];
            } else {
                if (v[i][0] > v[i][1]) {
                    ans += v[i][0];
                    x--;
                } else {
                    ans += v[i][1];
                    y--;
                }
            }
        }
        return ans;
    }

int main()
{
  /*   Rahul and Ankit are the only two waiters in the Royal Restaurant. Today, the restaurant received n orders. The amount of tips may differ when handled by different waiters, if Rahul takes the ith order, he would be tipped ai rupees and if Ankit takes this order, the tip would be bi rupees.
In order to maximize the total tip value they decided to distribute the order among themselves. One order will be handled by one person only. Also, due to time constraints Rahul cannot take more than x orders and Ankit cannot take more than y orders. It is guaranteed that x + y is greater than or equal to n, which means that all the orders can be handled by either Rahul or Ankit. Find out the maximum possible amount of total tip money after processing all the orders.

Example 1:

Input:
n = 5, x = 3, y = 3
a[] = {1, 2, 3, 4, 5}
b[] = {5, 4, 3, 2, 1}
Output: 21
Explanation: Rahul will serve 3rd, 4th 
and 5th order while Ankit will serve 
the rest. */

    return 0;
}