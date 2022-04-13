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

string frequencySort(string s)
{
    unordered_map<char, int> h;
    // put elements in map to count frequency
    for (int i = 0; i < s.size(); i++)
    {
        h[s[i]]++;
    }
    priority_queue<pair<int, char>> pq;
    // put element and its frequency in heap that will arrange it in sorted order
    for (auto x : h)
    {
        pair<int, char> p;
        p.first = x.second;
        p.second = x.first;
        pq.push(p);
    }
    // append the string as present in the heap
    string ans = "";
    while (pq.size() != 0)
    {
        ans += string(pq.top().first, pq.top().second);
        pq.pop();
    }
    return ans;
}

int main()
{

    return 0;
}