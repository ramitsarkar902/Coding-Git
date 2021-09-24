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

Node *SortedMerge(struct Node *head1, struct Node *head2)
{
    Node *res = NULL, *end = NULL;
    if (head1->data < head2->data)
    {
        res = head1;
        head1 = head1->next;
        res->next = NULL;
        end = res;
    }
    else
    {
        res = head2;
        head2 = head2->next;
        res->next = NULL;
        end = res;
    }
    while (head1 != NULL || head2 != NULL)
    {
        if (head1 != NULL && head2 != NULL)
        {
            if (head1->data < head2->data)
            {
                end->next = head1;
                end = head1;
                head1 = head1->next;
                end->next = NULL;
            }
            else
            {
                end->next = head2;
                end = head2;
                head2 = head2->next;
                end->next = NULL;
            }
        }
        else if (head1 != NULL)
        {
            end->next = head1;
            end = head1;
            head1 = head1->next;
            end->next = NULL;
        }
        else
        {
            end->next = head2;
            end = head2;
            head2 = head2->next;
            end->next = NULL;
        }
    }
    return res;
}

int main()
{

    return 0;
}