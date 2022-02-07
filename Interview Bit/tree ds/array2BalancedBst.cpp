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
#include<unordered_map>

#define ll long long
#define mod 1000000007 //10^9+7
              
#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
#define f(i,a,b) for(int i=a;i<b;i++)
#define fm(i,a,b) for(int i=a;i>b;i--)
#define pii pair<int, int>
#define v(x) vector<x>
#define sortv(vec) sort(vec.begin(), vec.end())
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue <int, vector<int>, greater<int>>
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
          
TreeNode* buildutil(const vector<int> &A, int start, int end){
if (start>end) return NULL;

int mid = start + (end-start)/2;
TreeNode* root = new TreeNode(A[mid]);

if (start == end){
    return root;
} else {
    root->left = buildutil(A, start, mid-1);
    root->right = buildutil(A, mid+1, end);
}

return root;
}
TreeNode*sortedArrayToBST(const vector<int> &A) {
    return buildutil(A, 0, A.size()-1);
}
       
          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}