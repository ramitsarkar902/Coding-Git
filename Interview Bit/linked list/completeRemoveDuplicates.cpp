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
#define vi vector<int>
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue <int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;
          

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* deleteDuplicates(ListNode* A) {
    ListNode * tempHead=new ListNode(0);
    tempHead->next=A;
    ListNode* temp=A;
    ListNode* prev=tempHead;
    while(temp!=NULL){

        while(temp->next!=NULL && temp->val==temp->next->val)temp=temp->next;
        if(prev->next==temp)prev=prev->next;
        else prev->next=temp->next;

        temp=temp->next;

    }
    return tempHead->next;
}
          
          
int main(){
          
          
          
return 0;
}