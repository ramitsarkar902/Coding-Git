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
#define pqmax priority_queue<int>
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

vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
    vector<int> res;
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push({nums[i], i});
    }
    res.push_back(pq.top().first);
    for (int i = k; i < nums.size(); i++)
    {
        pq.push({nums[i], i});
        while (pq.top().second <= i - k)
        {
            pq.pop();
        }
        res.push_back(pq.top().first);
    }
    return res;
}

int main()
{

    return 0;
}