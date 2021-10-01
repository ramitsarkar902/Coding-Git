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

void k(vector<vector<int>> &ans, vector<int> &temp, int A, int b, int pos)
{

    if (temp.size() == b)
    {

        ans.push_back(temp);

        return;
    }

    for (int i = pos; i <= A; i++)
    {

        temp.push_back(i);

        k(ans, temp, A, b, i + 1);

        temp.pop_back();
    }
}

vector<vector<int>> combine(int A, int B)
{

    vector<int> a;

    for (int i = 1; i <= A; i++)
    {

        a.push_back(i);
    }

    vector<vector<int>> ans;

    vector<int> temp;

    k(ans, temp, A, B, 1);

    return ans;
}

int main()
{

    return 0;
}