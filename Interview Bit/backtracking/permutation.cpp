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

void fun(vector<int> &A, vector<vector<int>> &v, int i, int n)
{

    if (i == n - 1)
    {
        v.push_back(A);
        return;
    }

    for (int j = i; j < n; j++)
    {

        swap(A[i], A[j]);

        fun(A, v, i + 1, n);

        swap(A[i], A[j]);
    }
}

vector<vector<int>> permute(vector<int> &A)
{

    int n = A.size();

    vector<vector<int>> v;

    fun(A, v, 0, n);

    return v;
}

int main()
{

    return 0;
}