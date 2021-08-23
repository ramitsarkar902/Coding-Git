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

int maxHeight(int height[], int width[], int length[], int n)
{
    //Your code here
    vector<vector<int>> v;
    f(i, 0, n)
    {
        v.push_back({height[i], width[i], length[i]});
        v.push_back({height[i], length[i], width[i]});
        v.push_back({width[i], length[i], height[i]});
        v.push_back({width[i], height[i], length[i]});
        v.push_back({length[i], height[i], width[i]});
        v.push_back({length[i], width[i], height[i]});
    }

    sort(v.begin(), v.end());

    int N = v.size();
    int dp[N];

    f(i, 0, N)
    {
        dp[i] = v[i][2];
    }

    f(i, 0, N)
    {
        f(j, 0, i)
        {
            int a = v[j][0];
            int b = v[j][1];

            int c = v[i][0];
            int d = v[i][1];

            if (a < c && b < d)
                dp[i] = max(dp[j] + v[i][2], dp[i]);
        }
    }

    return *max_element(dp, dp + n);
}

//another approach using pairs
int maxHeight(int height[], int width[], int length[], int n)
{

    int dp[10001];
    vector<pair<pair<int, int>, int>> v;
    memset(dp, 0, sizeof dp);
    v.clear();
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        a = height[i];
        b = width[i];
        c = length[i];
        //making all possible pairs
        v.push_back(make_pair(make_pair(a, b), c));
        v.push_back(make_pair(make_pair(b, a), c));
        v.push_back(make_pair(make_pair(a, c), b));
        v.push_back(make_pair(make_pair(c, a), b));
        v.push_back(make_pair(make_pair(b, c), a));
        v.push_back(make_pair(make_pair(c, b), a));

        sort(v.begin(), v.end());
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        dp[i] = v[i].second;
        for (int j = 0; j < i; j++)
        {
            if (v[i].first.first > v[j].first.first and v[i].first.second > v[j].first.second)//comparing the base mesurements 
            {
                dp[i] = max(dp[i], dp[j] + v[i].second);
            }
        }
    }

    int m = INT_MIN;
    for (int i = 0; i < v.size(); i++)
        m = max(dp[i], m);

    return m;
}

int main()
{

    return 0;
}