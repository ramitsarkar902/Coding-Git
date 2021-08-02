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

//possible bst structures
vector<Node*> constructTrees(int start, int end){
    vector<Node*> trees;
    if(start>end){
        trees.push_back(NULL);
        return trees;
    }
    for(int i=start;i<=end;i++){
        vector<Node*> leftSubtrees= constructTrees(start,i-1);
        vector<Node*> rightSubtrees= constructTrees(i+1,end);

        for(int j=0;j<leftSubtrees.size();j++){
            Node* left=leftSubtrees[j];
            for(int k=0;k<rightSubtrees.size();k++){
                Node*right=rightSubtrees[k];
                Node* node=new Node(i);
                node->left=left;
                node->right=right;
                trees.push_back(node);
            }
        }
    }
    return trees;


}
int catalan(int n){ //summation of CiCn-i using recursion !long process
    if(n<=1){
        return 1;
    }
    int res=0;
    for(int i=0;i<=n;i++){
        res+=catalan(1)*catalan(n-i-1);
    }

    return res;
}    

void preorder(Node* root){
    if(root==NULL){ return;}

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}          
          
int main(){
          for(int i=0;i<=10;i++){
              cout<<catalan(i)<<" ";
          } 
          cout<<endl;

          vector<Node*> totalTrees= constructTrees(1,3);
          for(int i=0;i<totalTrees.size();i++){
              cout<<(i+1)<<" :";
              preorder(totalTrees[i]);
            cout<<endl;
          }
          
          
return 0;
}