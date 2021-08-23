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

bool dfs(int u, int count, vector<int> adj[], int n, int m, vector<int> &visited)
{
    if (count == n)
    {
        return true;
    }
    visited[u] = 1;
    for (auto x : adj[u])
    {
        if (!visited[x] && dfs(x, count + 1, adj, n, m, visited))
        {
            return true;
        }
    }
    visited[u] = 0;
    return false;
}

bool check(int n, int m, vector<vector<int>> Edges)
{
    vector<int> adj[n + 1];

    for (auto &i : Edges)
    {
        adj[i[0]].push_back(i[1]);
        adj[i[1]].push_back(i[0]);
    }

    vector<int> visited(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        if (dfs(i, 1, adj, n, m, visited))
        {
            return true;
        }
    }
    return false;
}

int main()
{

    return 0;
}