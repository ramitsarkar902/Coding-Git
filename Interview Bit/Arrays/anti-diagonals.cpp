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

vector<vector<int>> diagonal(vector<vector<int>> &A)
{
    int n = A.size();
    int N = 2 * (n - 1) + 1;
    vector<vector<int>> ans(N);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            ans[i + j].push_back(A[i][j]);
    }
    return ans;
}

int main()
{

    return 0;
}