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

int steppingNumbers(int n, int m)
{
    // Code Here
    int res = 0;
    queue<int> q;
    for (int i = 1; i <= 9; i++)
        q.push(i);

    while (!q.empty())
    {
        int curr = q.front();
        q.pop();

        if (curr >= n && curr <= m)
            res++;

        if (curr <= m)
        {
            int last = curr % 10;
            if (last == 0)
                q.push(curr * 10 + 1);
            else if (last == 9)
                q.push(curr * 10 + 8);
            else
            {
                q.push(curr * 10 + last - 1);
                q.push(curr * 10 + last + 1);
            }
        }
    }
    if (n == 0)
        res++;
    return res;
}

int main()
{

    return 0;
}