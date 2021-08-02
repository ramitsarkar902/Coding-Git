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
          
void flatten(Node* root){
    if(root == NULL || root->left == NULL && root->right== NULL){
        return;
    }
    if(root->left!=NULL){
        flatten(root->left);
        Node* temp= root->right;
        root->right=root->left;
        root->left=NULL;

        Node* t=root->right;
        while(t!=NULL){
            t=t->right;
        }
        t->right= temp;
    }
    flatten(root->right);
}          

void inOrder(Node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

int main(){
          Node* root= new Node(4);
          root->left=new Node(9);
          root->right= new Node(5);
          root->left->left= new Node(1);
          root->left->right=new Node(3);
          root->right->right= new Node(6);
        flatten(root);
        inOrder(root);
          cout<<endl;
          return 0;
}
          
          
