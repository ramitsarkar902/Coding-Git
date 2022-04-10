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

int myAtoi(string s)
{
    int i = 0, sign = 1;

    while (s[i] == ' ')
        i++;

    if (s[i++] == '-')
        sign = -1;

    else if (s[i++] == '+')
        sign = 1;

    // if not digit
    else if (s[i] > 47 && s[i] < 58)
    {
    }

    else
        return 0;

    while (s[i] == '0')
        i++;

    string no = "";
    int n = 0;

    while (i < s.size())
    {
        if (s[i] > 47 && s[i] < 58)
            no += s[i];
        else
            break;
        i++;
    }

    if (no.size() > 10)
    {
        return (sign == 1 ? INT_MAX : INT_MIN);
    }
    else if (no.size() == 10)
    {
        string maxi("2147483647");
        string mini("2147483648");
        if (sign == 1 && no >= maxi)
            return INT_MAX;
        else if (no >= mini)
            return INT_MIN;
    }

    i = 0;
    while (i < no.size())
    {
        int x = no[i] - '0';
        n = n + (x % 10);
        if (i == no.size() - 1)
            break;
        else
            n = n * 10;
        i++;
    }

    // we have stored sign before, multiply with answer
    return sign * n;
}

int main()
{
    cout << myAtoi("-153");

    return 0;
}