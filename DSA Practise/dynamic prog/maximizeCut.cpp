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

int ans(int n, int x, int y, int z, int dp[])
{
    if (n == 0)
        return 0;
    if (n < 0)
        return INT_MIN;
    if (dp[n] != -1)
        return dp[n];
    int a = ans(n - x, x, y, z, dp) + 1;
    int b = ans(n - y, x, y, z, dp) + 1;
    int c = ans(n - z, x, y, z, dp) + 1;
    return dp[n] = (max(max(a, b), c));
}
int maximizeTheCuts(int n, int x, int y, int z)
{
    int dp[n + 1];
    memset(dp, -1, sizeof(dp));
    int a = ans(n, x, y, z, dp);
    if (a < 0)
        return 0;
    return a;
}

int main()
{

    return 0;
}