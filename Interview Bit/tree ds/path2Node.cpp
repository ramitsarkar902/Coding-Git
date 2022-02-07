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
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
void fun(TreeNode* A,int B,vector<int> v,vector<int> &ans){

     if(A==NULL) return ;

     v.push_back(A->val);

     if(B==A->val){ for(int i=0;i<v.size();i++) ans.push_back(v[i]); return;}

     fun(A->left,B,v,ans);

     fun(A->right,B,v,ans);

 }

vector<int>solve(TreeNode* A, int B) {

    vector<int> v; vector<int> ans;

    fun(A,B,v,ans);

    return ans;

}

int main()
{

    return 0;
}