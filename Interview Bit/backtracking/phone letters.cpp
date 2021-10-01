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

string s[] = {"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void solve(vector<string> &v, string A, int no, string c)
{

    if (no == A.size())
    {
        v.push_back(c);
        return;
    }

    int d = A[no] -'0';

    for (int j = 0; j < s[d].size(); j++)
    {

        c.push_back(s[d][j]);

        solve(v, A, no + 1, c);

        c.pop_back();
    }
}

vector<string> letterCombinations(string A)
{

    vector<string> v;

    string c="";

    solve(v, A, 0, c);

    return v;
}

int main()
{

    return 0;
}