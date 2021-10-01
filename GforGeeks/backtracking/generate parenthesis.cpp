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
#define v(x) vector<x>
#define sortv(vec) sort(vec.begin(), vec.end())
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue<int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;

//for linked list
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

void solve(int n, int o, int c, string s, vector<string> &str)
{
    if (o == 0 && c == 0)
    {
        str.push_back(s);
        return;
    }
    if (o != 0)
    {
        string s1 = s;
        s1 = s1 + '(';
        solve(n, o - 1, c, s1, str);
    }
    if (o < c)
    {
        string s2 = s;
        s2 = s2 + ')';
        solve(n, o, c - 1, s2, str);
    }
}

vector<string> AllParenthesis(int n)
{
    string s = "";
    vector<string> str;
    int open = n;
    int close = n;
    solve(n, open, close, s, str);
    return str;
}

int main()
{

    return 0;
}