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

int intersectPoint(Node *head1, Node *head2)
{
    // Your Code Here
    Node *h1 = head1, *h2 = head2;

    int count1 = 0;
    while (h1 != NULL)
    {
        count1++;
        h1 = h1->next;
    }

    int count2 = 0;
    while (h2 != NULL)
    {
        count2++;
        h2 = h2->next;
    }

    if (count1 > count2)
    {
        int diff = count1 - count2;
        h1 = head1;
        while (diff-- > 0)
        {
            h1 = h1->next;
        }
        h2 = head2;
        while (h1 != h2)
        {
            h1 = h1->next;
            h2 = h2->next;
        }
    }
    else
    {
        int diff = count2 - count1;

        h2 = head2;
        while (diff-- > 0)
        {
            h2 = h2->next;
        }
        h1 = head1;
        while (h1 != h2)
        {
            h1 = h1->next;
            h2 = h2->next;
        }
    }
    if (h1 != NULL)
    {
        return h1->data;
    }
    return -1;
}

int main()
{

    return 0;
}