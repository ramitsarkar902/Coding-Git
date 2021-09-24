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
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
          
          
          
ListNode* solve(ListNode* A, int B) {
    int c=0;
    ListNode *curr=A,*prev=NULL,*nxt=NULL;
    while(curr&&c<B){
        nxt=curr->next;
        curr->next = prev;

        prev=curr;
        curr=nxt;
        c++;
    }
    if(nxt){
        A->next=nxt;
        c=1;
        while(nxt&&c<B){
            nxt=nxt->next;
            c++;
        }
        if(nxt->next){
            
            nxt->next = solve(nxt->next, B);
        }
    }
    return prev;
}          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}