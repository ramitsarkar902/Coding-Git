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
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};


          
          
struct CompareNode {
                bool operator()(ListNode* const & p1, ListNode* const & p2) {
                        // return "true" if "p1" is ordered before "p2", for example:
                        return p1->val > p2->val;
                }
        };
    ListNode *mergeKLists(vector<ListNode *> &lists) {
            ListNode* dummy = new ListNode(0);
            ListNode* tail = dummy;

            priority_queue<ListNode*,vector<ListNode*>,CompareNode> queue;

            for (int i = 0; i < lists.size(); i++) {
                    if (lists[i] != NULL) {
                            queue.push(lists[i]);
                    }
            }

            while (!queue.empty()) {
                    tail->next = queue.top();
                    queue.pop();
                    tail = tail->next;

                    if (tail->next) {
                            queue.push(tail->next);
                    }
            }

            return dummy->next;      
    }  
          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}