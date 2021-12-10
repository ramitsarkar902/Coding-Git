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
struct Node *next;
 Node(int x)
{
data = x;
 next = NULL;
 }
};
          
          
Node *swapPairs(Node* head){
     if(head==NULL)
        {
            return NULL;
        }
        int count = 0;
        
        Node* currptr = head;
        Node* prevptr = NULL;
        Node* nextptr;
        
        while(currptr!=NULL && count<2)
        {
            nextptr = currptr->next;
            currptr->next = prevptr;
            
            prevptr = currptr;
            currptr = nextptr;
            
            count++;
            
            
        }
        
        if(nextptr!=NULL)
        {
            head->next = swapPairs(nextptr);
        }
        
        return prevptr;
        
        
        
    
}          
          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}