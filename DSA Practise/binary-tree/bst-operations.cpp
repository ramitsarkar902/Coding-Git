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
          

Node* searchBST(Node*root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }

    if(root->data > key){
        return searchBST(root->left, key);
    }
    
    return searchBST(root->right, key);

}

Node* deleteinBST(Node* root, int key){
    if(key < root->data){
        root->left =deleteinBST(root->left, key);
    }
    else if (key > root->data)
    {
        root->right=deleteinBST(root->right,key);
    }

    else{
        
    }
    
}

Node* insertBST(Node* root, int val){
     if(root == NULL){
         return new Node(val);
     }
    if(val<root->data){
        root->left= insertBST(root->left, val);
    }
    if(val>root->data){
        root->right=insertBST(root->right, val);
    }
    return root; 
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
          
    Node* root = NULL;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        insertBST(root, n);
    }   

    inorder(root);    
          
return 0;
}