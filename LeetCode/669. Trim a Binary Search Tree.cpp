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
#define mod 1000000007 // 10^9+7

#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
#define f(i, a, b) for (int i = a; i < b; i++)
#define fm(i, a, b) for (int i = a; i > b; i--)
#define pii pair<int, int>
#define v(x) vector<x>
#define sortv(vec) sort(vec.begin(), vec.end())
#define pqmax priority_queue<int>
#define pqmin priority_queue<int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *trimBST(TreeNode *root, int low, int high)
{
    if (root == NULL)
        return NULL;
    if (root->val < low)//if root is less than low then discard the right part
        return trimBST(root->right, low, high);
    if (root->val > high) // if root is greater than high its means all its right childs greater than it so discard them
        return trimBST(root->left, low, high);
    else
    {
        root->left = trimBST(root->left, low, high);
        root->right = trimBST(root->right, low, high);
        return root;
    }
}

int main()
{

    return 0;
}