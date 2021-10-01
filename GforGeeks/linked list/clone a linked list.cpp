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

void reorderList(Node *head)
{
    // Your code here
    Node *i, *j;
    i = head;
    int c = 0;
    while (i)
    {
        c++;
        i = i->next;
    }
    int mid = c / 2;
    if (c % 2 == 1)
        mid = (c / 2) + 1;

    i = head;

    for (int k = 0; k < mid; k++)
    {
        i = i->next;
    }

    Node *nxt = i, *prev = NULL;
    j = nxt->next;
    i = head;

    nxt->next = NULL;

    while (j)
    { //reverse the list
        Node *temp = j->next;
        j->next = prev;
        prev = j;
        if (!temp)
            break;
        j = temp;
    }

    //insert the reversed list into first half of og list
    while (i && j)
    {
        Node *temp = i->next, *temp2 = j->next;
        i->next = j;

        j->next = temp;

        i = temp;

        j = temp2;
    }
}

int main()
{

    return 0;
}