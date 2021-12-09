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
          

bool compare(int x, int y)
{
    return abs(x) < abs(y);
}
  
void findMinSum(int arr[], int n)
{
    sort(arr, arr + n, compare);
    int min = INT_MAX, x, y;
    for (int i = 1; i < n; i++) {
  
        // Absolute value shows how close it is to zero
        if (abs(arr[i - 1] + arr[i]) <= min) {
  
            // if found an even close value
            // update min and store the index
            min = abs(arr[i - 1] + arr[i]);
            x = i - 1;
            y = i;
        }
    }
    cout << "The two elements whose sum is minimum are "
         << arr[x] << " and " << arr[y];
}
          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}