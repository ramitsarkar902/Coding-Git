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

string remove(string s)
{
    if (s == "")//for empty
        return "";

    int c = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] != s[i + 1])
            c++;
    }
    if (c == s.size())
        return s;//if all elements are unique the return the string

    int i = 0;
    string ans = "";
    while (i < s.size() - 1)
    {
        if (s[i] != s[i + 1])
        {
            ans.push_back(s[i]);
            i++;
            continue;
        }

        int point = i; //store the point from where duplicate starts

        while (i < s.size() && s[i] == s[point]) //continue till last duplicate element
        {
            i++;// at last will have the next element of the duplicate sequence
        }
    }

    if (i == s.size() - 1)
    {
        ans.push_back(s[i]);
        i++;
    }

    return remove(ans);//if ans has duplicates then again recur
}

int main()
{

    return 0;
}