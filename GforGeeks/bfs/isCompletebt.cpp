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
#include<unordered_map>

#define ll long long
#define mod 1000000007 //10^9+7
              
#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
#define f(i,a,b) for(int i=a;i<b;i++)
#define fm(i,a,b) for(int i=a;i>b;i--)
#define pii pair<int, int>
#define v(x) vector<x>
#define sortv(vec) sort(vec.begin(), vec.end())
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue <int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;
          
          
          
          
          
          
//for linked list          
struct Node
{
int data;
struct Node *left,*right;
 Node(int x)
{
data = x;
left=right= NULL;
 }
};

          
          
     
bool isComplete(Node* root){
    queue<Node*> q;
        q.push(root);
        
        int check = 0;
        bool ans = true;
        
        while(q.size()>0){
            root = q.front();
            q.pop();
            
            if(check == 1 and root!=NULL){
                ans = false;
            }
            if(root == NULL){
                check=1;
            }
            else{
                q.push(root->left);
                q.push(root->right);
            }
        }
        return ans;
}         
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}