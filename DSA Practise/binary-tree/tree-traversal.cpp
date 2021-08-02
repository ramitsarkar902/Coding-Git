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
void preorder_traversal(struct Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);

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
    preorder_traversal(root);
}