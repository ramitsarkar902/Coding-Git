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

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


int length(ListNode *x)
{

    int l = 0;

    while (x)
    {

        l++;

        x = x->next;
    }

    return l;
}

int  lPalin(ListNode *A)
{

    ListNode *curr = A, *h1 = A;

    int l = length(A);

    float n = l / 2;

    for (int i = 1; i < n; i++)
    {

        curr = curr->next;
    }

    ListNode *prev = NULL, *next = NULL;

    while (curr)
    {

        next = curr->next;

        curr->next = prev;

        prev = curr;

        curr = next;
    }

    ListNode *h2 = prev;

    while (h1 && h2)
    {

        if (h1->val != h2->val)
            return 0;

        h1 = h1->next;
        h2 = h2->next;
    }

    return 1;
}

int main()
{

    return 0;
}