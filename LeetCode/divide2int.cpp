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
#include <unordered_map>

#define ll long long
#define mod 1000000007 // 10^9+7

#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
#define f(i, a, b) for (int i = a; i < b; i++)
#define fm(i, a, b) for (int i = a; i > b; i--)
#define pii pair<int, int>
#define v(x) vector<x>
#define sortv(vec) sort(vec.begin(), vec.end())
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue<int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;

// for linked list
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int divide(int dividend, int divisor)
{
    if (dividend < 0)
    {
        dividend = ceil(dividend);
    }
    else if (divisor < 0)
    {
        divisor = ceil(divisor);
    }
    if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;
    int ans = (floor(dividend) / floor(divisor));
    if (ans > INT_MAX - 1)
        return INT_MAX;
    if (ans < INT_MIN)
        return INT_MIN;
    return ans;
}

int main()
{
    cout << divide(10, 3);

    return 0;
}