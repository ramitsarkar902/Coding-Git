#include <stdio.h>
#include<math.h>
struct node{
    int key;
    int height;
    struct node*left;
    struct node*right;
};

struct node* createNode(int key){
    struct node* n = malloc(sizeof(struct node));
    n->key=key;n->left=NULL;n->right=NULL;n->height=1;

    return n;
}
int max (int a, int b){
    return (a>b)?a:b;
}

int getHeight(struct node* root){
    if(root==NULL)return 0;
    
    return root->height;
}

int getBalanceFactor(struct node* root){

    if(root==NULL)return 0;

    return getHeight(root->left)-getHeight(root->right);
}

struct node* rightRotate(struct node* y){
    struct node* x=y->left;
    struct node *t2=x->right;

    x->right=y;
    y->left=t2;
    
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;
    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;

    return x;

}

struct node* leftRotate(struct node* x){
    struct node* y=x->right;
    struct node* t2=y->left;

    y->left=x;
    x->right=t2;
   
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;
    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;

    return y;
}



struct node* insert(struct node* node,int key){
    if(node==NULL) return createNode(key);

    if(key<node->key)node->left=insert(node->left,key);
    else if(key>node->key)node->right=insert(node->right,key);

    node->height= max(getHeight(node->right), getHeight(node->left)) + 1;
    int balance_factor=getBalanceFactor(node);

    if(balance_factor>1 && key<node->left->key)return leftRotate(node);

    if(balance_factor<-1 && key>node->right->key)return rightRotate(node);

    if(balance_factor>1 && key> node->left->key){
        node->left=leftRotate(node->left);
        return rightRotate(node);
    }
     if(balance_factor<-1 && key < node->right->key){
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }
    return node;
}

void preOrder(struct node* root){

    if(root!=NULL){
        printf("%d ",root->key);
        preOrder(root->left);
        preOrder(root->right);
    }
    
}
void inOrder(struct node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ",root->key);
        inOrder(root->right);
    }
}

int main(){
    struct node * root = NULL;
 
 
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);
    root=insert(root,-1);
    preOrder(root);
    printf("\n");
    inOrder(root);
    return 0;
}