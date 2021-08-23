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

//using recursion
int solve(int arr[], int i, int j)
{
    if (i == j)
        return arr[i];

    if (i > j)
        return 0;

    int l = arr[i] + min(solve(arr, i + 2, j), solve(arr, i + 1, j - 1));
    int r = arr[j] + min(solve(arr, i + 1, j - 1), solve(arr, i, j - 2));

    return max(l, r);
}

//more optimized using memoization i.e making lookup table with dp
long long maximumAmount(int arr[], int n)
{
    // Your code here
    long long dp[n][n];

    for (int g = 0; g < n; g++)
    {
        for (int i = 0, j = g; j < n; i++, j++)
        {
            if (g == 0)
            {
                dp[i][j] = arr[i];
            }
            else if (g == 1)
            {
                dp[i][j] = max(arr[i], arr[j]);
            }
            else
            {
                int val1 = arr[i] + min(dp[i + 2][j], dp[i + 1][j - 1]);
                int val2 = arr[j] + min(dp[i + 1][j - 1], dp[i][j - 2]);
                int val = max(val1, val2);
                dp[i][j] = val;
            }
        }
    }

    return dp[0][n - 1];
}

int main()
{

    return 0;
}