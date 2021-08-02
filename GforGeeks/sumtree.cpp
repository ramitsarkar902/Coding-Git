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

int sum(Node *root)
{
    if (root == NULL)
        return 0;
    
    return sum(root->left) + root->data +
           sum(root->right);
}

int isSumTree(Node* node)
{
    int ls, rs;

    if (node == NULL ||
       (node->left == NULL && 
        node->right == NULL))
        return 1;

   ls = sum(node->left);
   rs = sum(node->right);

    if ((node->data == ls + rs) &&
          isSumTree(node->left) &&
          isSumTree(node->right))
        return 1;

   return 0;
}
          
int main(){
          Node *root = new Node(26);
    root->left = new Node(10);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(6);
    root->right->right = new Node(3);
    
    if (isSumTree(root))
        cout << "The given tree is a SumTree ";
    else
        cout << "The given tree is not a SumTree ";

          
          
return 0;
}