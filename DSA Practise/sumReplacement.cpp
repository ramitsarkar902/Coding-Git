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

#define ll long long
#define mod 1000000007 //10^9+7
              
#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
using namespace std;
          
struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void sumReplace(Node*root){
    if(root==NULL){
        return;
    }
    sumReplace(root->left);
    sumReplace(root->right);
    if(root->left !=NULL ){
        root->data+=root->left->data;
    }
    if(root->right!=NULL){
        root->data+=root->right->data;
    }
}

void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
          
          
int main(){
    struct Node* root = new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->right=new Node(7);
    root->right->left=new Node(6);
    preOrder(root);
    cout<<"\n";
    sumReplace(root);
    preOrder(root);
        
return 0;
}