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
//take two bst ands check if they are identical or not
bool isIdentical(Node* root1, Node* root2){
    if(root1 == NULL && root2 == NULL) return true;

    else if(root1 == NULL || root2 == NULL) return false;

    else{
        bool data= root1->data==root2->data;
        bool left=isIdentical(root1->left,root2->left);
        bool right=(root1->right,root2->right);

        if(data && left && right) return true;

        else return false;
            }
}
          
          
int main(){
          
          
          
return 0;
}