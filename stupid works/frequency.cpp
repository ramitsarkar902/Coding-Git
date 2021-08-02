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
#define pii pair<int, int>
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

void getverticalOrder(Node* root, int hdis, map<int, vector<int>> &v){  

        if(root== NULL) return;

        v[hdis].push_back(root->data);
        getverticalOrder(root->left, hdis-1, v);
        getverticalOrder(root->right, hdis+1, v);

}          
          
int main(){
          
          
          
return 0;
}