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

bool getPath(Node*root, int key, vector<int> &path){
    if(root==NULL){
        return false;
    }

    path.push_back(root->data);
    if(root->data==key) return true;

    if(getPath(root->left,key,path) || getPath(root->right,key,path)){
        return true;
    }

    path.pop_back();
    return false;

}

int lca(Node* root,int n1,int n2){
    vector<int>path1,path2;
     if(!getPath(root,n1,path1)|| !getPath(root,n2,path2)){
         return -1;
     }

     int c;
     for(c=0;c<path1.size() && path2.size();c++){
         if(path1[c]!=path2[c]){
             break;
         }
     }
     return path1[c-1];
}
          
          
int main(){
          
          
          
return 0;
}