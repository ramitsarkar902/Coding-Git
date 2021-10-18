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

 vector<vector<int> > fourSum(vector<int> &a, int k) {//0,0,2,1,1 k=3
        // Your code goes here
        if (a.size() < 4) return {};
    vector<vector<int>> ans;
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size() - 3; ++i) {
        // current element is greater than k then no quadruplet can be found
        if (a[i] > 0 && a[i] > k) break;
        // removing duplicates
        if (i > 0 && a[i] == a[i - 1]) continue;
        for (int j = i + 1; j < a.size() - 2; ++j) {
            // removing duplicates
            if (j > i + 1 && a[j] == a[j - 1]) continue;

            // taking two pointers
            int left = j + 1;
            int right = a.size() - 1;
            while (left < right) {
                int old_l = left;
                int old_r = right;
                // calculate current sum
                int sum = a[i] + a[j] + a[left] + a[right];
                if (sum == k) {
                    // add to answer
                    ans.push_back({a[i], a[j], a[left], a[right]});

                    // removing duplicates
                    while (left < right && a[left] == a[old_l]) left++;
                    while (left < right && a[right] == a[old_r]) right--;
                } else if (sum > k) {
                    right--;
                } else {
                    left++;
                }
            }
        }
    }
    return ans;
        
    }      

/*  Pseudo Code:
for i in [0, n-4]
  for j in [i+1, n-3]
    left=j+1
    right=n-1
    while(left < right)
      if(a[i]+a[j]+a[left]+a[right] == k)
        //found one quadruplet {i, j, left, right}
      if(a[i]+a[j]+a[left]+a[right] < k)
        left++
      else
        right--    */ 
          
          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}