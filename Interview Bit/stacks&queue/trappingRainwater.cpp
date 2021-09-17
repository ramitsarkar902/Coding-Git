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
                  
int trap(const vector<int> &arr) {
    int n=arr.size();
     int left = 0;
    int right = n-1;
  
    // To store Left max and right max
    // for two pointers left and right
    int l_max = 0;
    int r_max = 0;
  
    // To store the total amount
    // of rain water trapped
    int result = 0;
    while (left <= right)
    {
  
      // We need check for minimum of left
      // and right max for each element
      if(r_max <= l_max)
      {
  
        // Add the difference between
        // current value and right max at index r
        result += max(0, r_max-arr[right]);
  
        // Update right max
        r_max = max(r_max, arr[right]);
  
        // Update right pointer
        right -= 1;
      }
      else
      {
  
        // Add the difference between
        // current value and left max at index l
        result += max(0, l_max-arr[left]);
  
        // Update left max
        l_max = max(l_max, arr[left]);
  
        // Update left pointer
        left += 1;
      }
    }
    return result;
}

          
int main(){
          
          
          
return 0;
}