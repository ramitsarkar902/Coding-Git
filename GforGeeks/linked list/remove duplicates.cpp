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

Node *removeAllDuplicates(struct Node *head)
{
    //code here
    struct Node *dummy = new Node(-1);

    // dummy node points
    // to the original head
    dummy->next = head;

    // Node pointing to last
    // node which has no duplicate.
    struct Node *prev = dummy;

    // Node used to traverse
    // the linked list.
    struct Node *current = head;

    while (current != NULL)
    {
        // Until the current and
        // previous values are
        // same, keep updating current
        while (current->next != NULL &&
               prev->next->data == current->next->data)
            current = current->next;

        // if current has unique value
        // i.e current is not updated,
        // Move the prev pointer to
        // next node
        if (prev->next == current)
            prev = prev->next;

        // when current is updated
        // to the last duplicate
        // value of that segment,
        // make prev the next of current
        else
            prev->next = current->next;

        current = current->next;
    }

    // update original head to
    // the next of dummy node
    head = dummy->next;
    return head;
}

int main()
{

    return 0;
}