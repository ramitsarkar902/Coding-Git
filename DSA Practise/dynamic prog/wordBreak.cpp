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
#include <bits/stdc++.h>

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

int wordBreak(string A, vector<string> &B)
{
    int i, j, k, n = B.size();

    set<string> mp;
    for (i = 0; i < n; i++)
    {
        mp.insert(B[i]);
    }
    int len = (int)A.size();
    vector<bool> dp(len + 1, false);
    dp[0] = true;

    for (int i = 1; i <= len; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (dp[j] && mp.find(A.substr(j, i - j)) != mp.end())
            {
                dp[i] = true;
                break;
            }
        }
    }
    return dp[len];
}

int main()
{
    /* Input:
n = 12
B = { "i", "like", "sam",
"sung", "samsung", "mobile",
"ice","cream", "icecream",
"man", "go", "mango" }
A = "ilike"
Output:
1
Explanation:
The string can be segmented as "i like". */
    return 0;
}