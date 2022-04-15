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

struct sortMax
{
    bool operator()(const pair<int, pair<int, int>> &a, const pair<int, pair<int, int>> &b)
    {
        return a.first > b.first;
    }
};

struct sortMin
{
    bool operator()(const pair<int, pair<int, int>> &a, const pair<int, pair<int, int>> &b)
    {
        return a.first < b.first;
    }
};

int getNumberOfBacklogOrders(vector<vector<int>> &orders)
{
    priority_queue<pair<long long int, long long int>> buy;
    priority_queue<pair<long long int, long long int>, vector<pair<long long int, long long int>>, greater<pair<long long int, long long int>>> sell;

    for (int i = 0; i < orders.size(); i++)
    {
        // if buy order
        if (orders[i][2] == 0)
        {
            long long int a, b;
            while (!sell.empty() && sell.top().first <= orders[i][0] && orders[i][1] > 0)
            {

                a = sell.top().first;
                b = sell.top().second;

                long long int buy_left = orders[i][1] - b;
                long long int sell_left = b - orders[i][1];

                orders[i][1] = buy_left > 0 ? buy_left : 0;

                b = sell_left > 0 ? sell_left : 0;

                sell.pop();

                if (b > 0)
                {
                    sell.push({a, b});
                }
            }
            if (orders[i][1] > 0)
                buy.push({orders[i][0], orders[i][1]});
        }
        // if sell order
        if (orders[i][2] == 1)
        {
            long long int a, b;
            while (!buy.empty() && buy.top().first >= orders[i][0] && orders[i][1] > 0)
            {

                a = buy.top().first;
                b = buy.top().second;

                long long int sell_left = orders[i][1] - b;
                long long int buy_left = b - orders[i][1];

                orders[i][1] = sell_left > 0 ? sell_left : 0;

                b = buy_left > 0 ? buy_left : 0;

                buy.pop();

                if (b > 0)
                {
                    buy.push({a, b});
                }
            }
            if (orders[i][1] > 0)
                sell.push({orders[i][0], orders[i][1]});
        }
    }
    long long int sum = 0;

    while (buy.size() > 0)
    {
        sum += buy.top().second;
        buy.pop();
    }
    while (sell.size() > 0)
    {
        sum += sell.top().second;
        sell.pop();
    }
    return (sum % mod);
}

int main()
{

    return 0;
}