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
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *reverseBetween(ListNode *A, int B, int C)
{
    int i = 1;

    ListNode *start, *end, *prev, *next;

    ListNode *temp = new ListNode(0);

    temp->next = A;

    ListNode *curr = temp;

    while (i != (B))
    {
        curr = curr->next;
        i++;
    }

    start = curr;
    end = curr->next;
    curr = curr->next;
    prev = NULL;

    while (i != (C + 1))
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;

        i++;
    }

    start->next = prev;
    end->next = curr;

    return temp->next;
}

int main()
{

    return 0;
}