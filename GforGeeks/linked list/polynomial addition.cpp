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
    int coeff;
    int pow;
    struct Node* next;
    
    Node(int c, int p){
        coeff = c;
        pow = p;
        next = NULL;
    }
};
          
Node *head,*tail;
void insert(Node *root){
    if(!head){
        head=root;
        tail=root;
    }
    else{
        tail->next=root;
        tail=root;
    }
}         
Node* addPolynomial(Node *p1, Node *p2)
    {
        //Your code here
        head=NULL,tail=NULL;
        Node *first=p1,*second=p2;
        
        while(first&&second){
            if(first->pow==second->pow){
                first->coeff+=second->coeff;
                Node *temp=first,*temp2=second;
                first=first->next;
                second=second->next;
                temp->next = NULL;
                temp2->next =NULL;
                insert(temp);

            }
            else if(first->pow>second->pow){
                Node *temp=first;
                first=first->next;
                temp->next = NULL;
                insert(temp);
            }
            else{
                Node *temp=second;
                second=second->next;
                temp->next = NULL;
                insert(temp);
            }
        }
        if(first)tail->next=first;
        if(second)tail->next=second;

        return head;
    }          
          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}