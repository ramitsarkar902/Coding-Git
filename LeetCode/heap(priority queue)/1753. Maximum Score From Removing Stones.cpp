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

int maximumScore(int a, int b, int c)
{
    priority_queue<int> pq;
    pq.push(a);
    pq.push(b);
    pq.push(c);
    int m = INT_MAX;
    int n = INT_MIN;
    int ans = 0;

    while (pq.size())
    {
        if (pq.top() == 0)
            pq.pop();
        else
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            if (a >= b)
            {
                ans += b;
                pq.push(a - b);
                pq.push(0);
            }
        }
    }
    return ans;

    /*  priority_queue<int>q;

     q.push(a);
     q.push(b);
     q.push(c);

     int res=0;
     while(q.size()>1){
         int x=q.top()-1;
         q.pop();

         int y=q.top()-1;
         q.pop();

         if(x)
             q.push(x);
         if(y)
             q.push(y);

         res++;
     }

     return res;
     } */
}

int main()
{

    return 0;
}