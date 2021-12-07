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
          
          
          
int min_sprinklers(int arr[],int N){
     vector<pair<int, int> > V;
    // Traverse the array arr[]
    for (int i = 0; i < N; i++) {
        if (arr[i] > -1) {
            V.push_back(
                pair<int, int>(i - arr[i], i + arr[i]));
        }
    }
    // Sort the array sprinklers in
    // ascending order by first element
    sort(V.begin(), V.end());
 
    // Stores the rightmost range
    // of a sprinkler
    int maxRight = 0;
    // Stores minimum sprinklers
    // to be turned on
    int res = 0;
 
    int i = 0;
 
    // Iterate until maxRight is
    // less than N
    while (maxRight < N) {
 
        // If i is equal to V.size()
        // or V[i].first is greater
        // than maxRight
 
        if (i == V.size() || V[i].first > maxRight) {
            return -1;
        }
        // Stores the rightmost boundary
        // of current sprinkler
        int currMax = V[i].second;
 
        // Iterate until i+1 is less
        // than V.size() and V[i+1].first
        // is less than or equal to maxRight
        while (i + 1 < V.size()
               && V[i + 1].first <= maxRight) {
 
            // Increment i by 1
            i++;
            // Update currMax
            currMax = max(currMax, V[i].second);
        }
 
        // If currMax is less than the maxRight
        if (currMax < maxRight) {
            // Return -1
            return -1;
        }
        // Increment res by 1
        res++;
 
        // Update maxRight
        maxRight = currMax + 1;
 
        // Increment i by 1
        i++;
    }
    // Return res as answer
    return res;
}        
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}