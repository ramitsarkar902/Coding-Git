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
          
          
struct TreeNode {
int val;
TreeNode* left;
TreeNode* right;

};        
          
void inorder(TreeNode *root, vector<int> &v){
    if(!root)return;
    
    inorder(root->left, v);
    v.push_back(root->val);
    inorder(root->right, v);
    
}
int t2Sum(TreeNode* A, int B) {
    vector<int> v;
    inorder(A, v);
    int l = 0, r = v.size()-1;

    while(l < r){
        int sum = v[l] + v[r];
        
        if(sum == B)return 1;
        
        if(sum > B)r--;
        else l++;
        
    }
    return 0;
}
          
int main(){
           
return 0;
}