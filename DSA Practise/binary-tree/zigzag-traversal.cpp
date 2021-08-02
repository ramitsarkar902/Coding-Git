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

void zigzagTraversal(Node* root){
    if(root==NULL){
        return;
    }
    stack<Node*> currlevel,nextlevel;
    bool leftToRight=true;

    currlevel.push(root);
    while(currlevel.empty()){
        Node* temp=currlevel.top();
        currlevel.pop();
        if(temp!=NULL){
        cout<<temp->data<<" ";

        if(leftToRight){
            if(temp->left)
            nextlevel.push(temp->left);

            if(temp->right)
            nextlevel.push(temp->right);
        }

        else{
            if(temp->right)
            nextlevel.push(temp->right);

            if(temp->left)
            nextlevel.push(temp->left);

        }

         }   

        if(currlevel.empty()){
            leftToRight=!leftToRight;
            swap(currlevel,nextlevel);
        }
    }
}
          
int main(){
          
          
          
return 0;
}