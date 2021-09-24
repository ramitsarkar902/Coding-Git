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
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
          
       
Node* rotate(Node* head, int k)
    {
        // Your code here
         int c = 1;
        Node *curr = head;
        while(c<k)
        {
            c++;
            curr = curr->next;
            //if k is greater than number of nodes (n),->
            //-->we need to again go back to head
            if(c<k&&curr==NULL) 
                curr = head;
        }
        if(curr->next == NULL)
            return head;
        Node *newhead = curr->next;
        curr->next = NULL;
        curr = newhead;
        while(curr!=NULL&&curr->next!=NULL)
        {
            curr = curr->next;
        }
        curr->next = head;
        head = newhead;
        return head;
   
    }          
          
int main(){
          
          
          
return 0;
}