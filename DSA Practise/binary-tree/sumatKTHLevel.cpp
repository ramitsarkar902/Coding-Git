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
    
int sumAtK(Node* root,int k){
    if(root == NULL){
        return -1;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int level=0,sum=0;

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp!=NULL){
            if(level==k) sum+=temp->data;

            if(temp->left) q.push(temp->left);

            if(temp->right) q.push(temp->right);
        }

        else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return sum;
}

int main(){

    return 0;
}