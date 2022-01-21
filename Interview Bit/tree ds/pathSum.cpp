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

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};

int ans;
void calc(TreeNode *A, int B)
{
    if (A->left == NULL && A->right == NULL)
    {
        if (B - A->val == 0)
            ans = 1 + ans;
        return;
    }
    if (A->left != NULL)
        calc(A->left, B - (A->val));
    if (A->right != NULL)
        calc(A->right, B - (A->val));
}

int hasPathSum(TreeNode *A, int B)
{
    ans = 0;
    calc(A, B);
    return (bool)ans;
}

//similar another question

//root to leaf paths with sum--> function will give vectors of the tree nodes having the sum equal to target
void DFS(TreeNode *A, vector<int> val, vector<vector<int>> &final)
{
    if (!A)
    {
        return;
    }
    val.push_back(A->val);
    if (!A->left && !A->right)
    {
        final.push_back(val);
    }
    DFS(A->left, val, final);
    DFS(A->right, val, final);
    val.pop_back();
}
vector<vector<int>> pathSum(TreeNode *A, int B)
{
    vector<vector<int>> final;
    if (!A)
    {
        return final;
    }
    vector<int> val;
    DFS(A, val, final);
    vector<vector<int>> ans;
    for (auto x : final)
    {
        int sum = 0;
        for (auto y : x)
        {
            sum += y;
        }
        if (sum == B)
        {
            ans.push_back(x);
        }
    }
    return ans;
}

int main()
{

    return 0;
}