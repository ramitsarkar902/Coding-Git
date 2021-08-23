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

int repeatedNumber(const vector<int> &A)
{
    int n = A.size();
    int c1 = 0, c2 = 0, first = -1, sec = -1;
    for (int i = 0; i < A.size(); i++)
    {
        if (first == A[i])
            c1++;
        else if (sec == A[i])
            c2++;
        else if (c1 == 0)
        {
            c1++;
            first = A[i];
        }
        else if (c2 == 0)
        {
            c2++;
            sec = A[i];
        }
        else
        {
            c1--;
            c2--;
        }
    }
    c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == first)
            c1++;
        else if (A[i] == sec)
            c2++;
    }
    if (c1 > n / 3)
        return first;
    if (c2 > n / 3)
        return sec;
    return -1;
}

int main()
{

    return 0;
}