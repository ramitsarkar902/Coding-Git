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
#define f(i,a,b) for(int i=a;i<b;i++)
#define fm(i,a,b) for(int i=a;i>b;i--)
#define pii pair<int, int>
#define vi vector<int>
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue <int, vector<int>, greater<int>>
#define ff first
#define ss second
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

//LCA function 

Node* lca(Node*root, int n1, int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }

    Node* left=lca(root->left,n1,n2);
    Node* right=lca(root->right,n1,n2);

    if(left!=NULL && right!=NULL) return root;

    if(left==NULL && right==NULL) return NULL;

    if(left!=NULL) return lca(root->left,n1,n2);

    if(right!=NULL) return lca(root->right,n1,n2);


}

//calc distance 


int findDist(Node*root,int k,int dist){
    if(root==NULL) return -1;

    if(root->data==k) return dist;

    int left=findDist(root->left,k,dist+1);
    if(left !=-1) return left;

    return findDist(root->right,k,dist);

}

//distance between nodes

int distance(Node* root,int n1,int n2){
    Node *temp=lca(root,n1,n2);

    int d1=findDist(temp,n1,0);
    int d2=findDist(temp,n2,0);

    return d1+d2;

}
          
          
int main(){
          
          
          
return 0;
}