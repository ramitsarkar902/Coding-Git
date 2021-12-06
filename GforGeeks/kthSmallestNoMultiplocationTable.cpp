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
          

    int KthSmallest(int m, int n, int k) {
        //Write your code here
           int low=1;
       int high=m*n;
       int ans;
       while(low<=high)
       {
           int count=0;
           int mid=(low+high)/2;
           for(int i=1;i<=m;i++)//find the number of smaller element than mid in each row
           {
               count=count+min(mid/i,n);
           }
           if(count>=k)
           {
               high=mid-1;
               ans=mid;
           }
           else
              low=mid+1;
       }
       return ans;
    }
        
          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}