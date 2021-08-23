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

/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/
struct val
{
    int first;
    int second;
};

/*You are required to complete this method*/
int maxChainLen(struct val p[], int n)
{
    //Your code here

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int dp[n + 1] = {0};
    int m = 0;

    sort(p, p + n, [&](struct val p, struct val q)
         { return p.first < q.first; });
    for (int i = 0; i < n; i++)
    {
        dp[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (p[i].first > p[j].second)
                dp[i] = max(dp[j] + 1, dp[i]);
        }
        m = max(dp[i], m);
    }
    return m;
}

int main()
{

    return 0;
}