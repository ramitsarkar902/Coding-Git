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
struct ListNode
{
int val;
struct ListNode *next;
 ListNode(int x)
{
val = x;
 next = NULL;
 }
};
          
          
          
ListNode* reverseKGroup(ListNode*head,int k){
    if(head==NULL)return NULL;
    ListNode* curr=head,*nxt=NULL,*prev=NULL;
    int c=0;
    while(curr!=NULL && c<k){//for first time
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
        c++;
    }
    //similarly call recursively for rest of the linked list
    if(nxt)head->next=reverseKGroup(nxt,k);

    return prev;

}         

//another approach better actually
ListNode* reverse(ListNode* head,int k){
    if(head==NULL || k==1)return head;

    ListNode* dummy=new ListNode(0);
    dummy->next=head;

    ListNode* curr=head,*nxt=NULL,*prev=dummy;
    int c=0;

    while(curr){
        curr=curr->next;
        c++;
    }

    while(c>=k){
        curr=prev->next;
        nxt=curr->next;

        f(i,1,k){
            curr->next=nxt->next;
            nxt->next=prev->next;
            prev->next=nxt;
            nxt=curr->next;
        }
        prev=curr;
        c-=k;
    }
    return dummy->next;
}          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}