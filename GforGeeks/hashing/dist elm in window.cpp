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
          
          
          
          
vector <int> countDistinct (int A[], int n, int k)//A[] = {1,2,1,3,4,2,3}
    {
        vector<int>v;
         map<int,int>m;
         for(int i=0;i<k;i++)m[A[i]]++;
         int j=0;v.push_back(m.size());
         for(int i=k;i<n;i++,j++)
         {
             if(m[A[j]]>1)m[A[j]]--;
             else if(m[A[j]]==1)m.erase(A[j]);
             m[A[i]]++;
             v.push_back(m.size());
         }
         return v;
    }         
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}