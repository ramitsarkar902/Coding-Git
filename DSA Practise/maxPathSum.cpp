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
#include<math.h>

#define ll long long
#define mod 1000000007 //10^9+7
              
#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
using namespace std;
          
          
struct Node {
int data;
Node* left;
Node* right;
Node(int val){
data=val;
left=NULL;
right=NULL;
}
};          


int calculate(Node*root, int &ans){
    if(root == NULL){
        return;
    }

    int left = calculate(root->left, ans);
    int right = calculate(root->right, ans);

    int maxSum= max(max(root->data, root->data+left+right), max(root->data+right, root->data+left));

    ans=max(ans, maxSum);

    int final=max(root->data, max(root->data+left, root->data+right));
    return final;
}

int maxPathSum(Node* root){
    int ans=INT_MIN;
    calculate(root,ans);

    return ans;
}

int main(){
          
          
          
return 0;
}