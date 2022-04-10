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

int calPoints(vector<string> &ops)
{

    int a, b;

    stack<int> st;

    for (auto i : ops)
    {
        if (i == "C")
        {
            st.pop();
        }
        else if (i == "D")
        {
            int x = st.top();
            st.push(x * 2);
        }
        else if (i == "+")
        {
            a = st.top();
            st.pop();
            b = st.top();
            st.push(a);
            st.push(a + b);
        }
        else
        {
            st.push(stoi(i));
        }
    }
    int ans = 0;
    while (st.size() != 0)
    {
        ans += st.top();
        st.pop();
    }
    return ans;
}

int main()
{

    return 0;
}