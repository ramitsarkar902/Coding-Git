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

bool isPossible(vector<int> &nums)
{
    unordered_map<int, int> mp;
    for (auto &it : nums)
        mp[it]++;
    for (auto &it : nums)
    {
        if (mp[it] == 0)
            continue;
        int freq = mp[it], curr = it, count = 0;
        while (mp.count(curr) && mp[curr] >= freq)
        {
            freq = fmax(freq, mp[curr]);
            mp[curr]--;
            count++;
            curr++;
        }
        if (count < 3)
            return false;
    }
    return true;
}


int main()
{


   

    return 0;
}