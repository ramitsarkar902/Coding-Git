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


void rightView(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int n=q.size();
        
         
         for(int i=0;i<n;i++){
             Node*curr=q.front();
             q.pop();
             if(i==n-1){
                 cout<<curr->data;
             }
             if(curr->left!=NULL) q.push(curr->left);

             if(curr->right!=NULL) q.push(curr->right);

         }
    }
}         
          
int main(){
          
          
          
return 0;
}