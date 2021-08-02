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



bool getPath(Node*root , int key, vector<int> &path){
    if(root == NULL){
        return false;
    }
        path.push_back(root->data);
        if(root->data == key){
            return true;
        }

        if(getPath(root->left, key, path) || getPath(root->right , key, path)){
            return true;
        }

        path.pop_back();
        return false;
}


int lca(Node*root, int n1, int n2){
    vector<int> path1,path2;
    if(!getPath(root,n1,path1)|| !getPath(root,n2,path2)){
        return -1;
    }
    int pc; //pathchanger point
    for(pc=0;pc<path1.size() && path2.size();pc++){
        if(path1[pc]!=path2[pc]){
            break;
        }

    }

    return path1[pc-1];
}       

//more optimised approach

Node* lca2(Node* root, int n1, int n2){
    if(root== NULL){
        return NULL;
    }
    if(root->data == n1 || root->data == n2){
        return root;
    }
    
    Node* leftlca = lca2(root->left,n1,n2);
    Node* rightlca = lca2(root->right, n1, n2);

    if(leftlca && rightlca){
        return root;
    }

    if(leftlca !=NULL){
        return leftlca;
    }

    return rightlca;
}
          
int main(){
          
          Node* root= new Node(1);
          root->left = new Node(2);
          root->right= new Node(3);
           root->left->left= new Node(4);
            root->right->left = new Node(5);
             root->right->right= new Node(6);
              root->right->left->left= new Node(7);

              int n1, n2;
              cin>>n1>>n2;
              Node* l = lca2(root,n1,n2);

              if(l==NULL) cout<<"Doesnt exist";

              else
              cout<<"Exists at "<<l->data;
          
return 0;
}