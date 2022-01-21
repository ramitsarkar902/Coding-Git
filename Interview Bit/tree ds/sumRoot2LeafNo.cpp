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

void dfs(TreeNode *root, vector<string> &ans, string &curr)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        curr += (root->val + '0');
        ans.push_back(curr);
        curr.pop_back();
    }

    curr += (root->val + '0');
    dfs(root->left, ans, curr);
    dfs(root->right, ans, curr);
    curr.pop_back();
}

int sumNumbers(TreeNode *root)
{
    v(string) ans;
    string curr = "";
    dfs(root, ans, curr);
    int num = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        // cout<<ans[i]<<" ";
        num = (num + stoi(ans[i])) % 1003;
    }
    return num;
}

int main()
{

    return 0;
}