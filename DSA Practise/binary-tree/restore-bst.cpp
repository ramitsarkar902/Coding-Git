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

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void calcPointer(Node* root, Node** first,Node **mid,Node **last,Node** prev){
    if(root == NULL) return;

    calcPointer(root->left,first,mid,last,prev);
    if(*prev &&root->data < (*prev)->data){
        if(!*first){
            *first=*prev;
            *mid= root;
    }else{
        *last= root;
    }
}
    *prev=root;
    calcPointer(root->right,first,mid,last,prev);
};

void restoreBST(Node* root) {
    Node* first, *mid, *last, *prev;
    first=NULL;
    last=NULL;
    mid=NULL;
    prev=NULL;


    calcPointer(root, &first,&mid,&last,&prev);

    if(first && last){
        swap(&(first->data), &(last->data));
    }
    else if(first && mid){
        swap(&(first->data),&(mid->data));
    }

}
          
          
int main(){
          
          cout<<"Helllo";
return 0;
}