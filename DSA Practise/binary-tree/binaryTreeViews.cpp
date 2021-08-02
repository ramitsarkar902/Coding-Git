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

void rightView(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
            Node* curr=q.front();
            q.pop();

            if(i== n-1)
            cout<<curr->data<<" ";

            if(curr->left !=NULL)
            q.push(curr->left);

            if(curr->right!=NULL)
            q.push(curr->right);


        }
    }
}

void leftView(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
            Node* curr=q.front();
            q.pop();

            if(i== 1)
            cout<<curr->data<<" ";

            if(curr->left !=NULL)
            q.push(curr->left);

            if(curr->right!=NULL)
            q.push(curr->right);


        }
    }
}

int main(){
        Node* root=new Node(1);
        root->left=new Node(2);
        root->right=new Node(3);
        root->left->left=new Node(4);
        root->left->right=new Node(5);
        root->right->right=new Node(7);
        root->right->left=new Node(6);


          rightView(root);
          cout<<"\n";
          leftView(root);
          
          
return 0;
}