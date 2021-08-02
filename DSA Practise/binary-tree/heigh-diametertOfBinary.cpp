#include<iostream>

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
//preorder traversal of binary tree
int maxDepth(Node* root)
{
if ( root == NULL ){
        return -1;
    }
    else{
        return 1 + max( maxDepth(root->left), maxDepth(root->right) );
    }
}

int diameter(Node*root)
{
    if ( root == NULL ){
        return -1;
    }

    int lheight=maxDepth(root->left);
    int rhieght=maxDepth(root->right);
    int currDiameter= lheight+rhieght+1;

    int ldiameter= diameter(root->left);
    int rdiameter= diameter(root->right);

    return max(currDiameter,max(ldiameter,rdiameter));
}

//inorder traversal of binary tree

//postorder traversal of binary tree

int main(){
    struct Node* root = new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->right=new Node(7);
    root->right->left=new Node(6);
    maxDepth(root);
}