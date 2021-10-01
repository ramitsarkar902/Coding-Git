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
          
          
long long toh(int N, int from, int to, int aux) {
    //Your code here
    long long count=0;
   if(N==1)
   {
       printf("move disk %d from rod %d to rod %d \n",N,from,to);
       return 1;
   }
   count=count+toh(N-1,from,aux,to);
   printf("move disk %d from rod %d to rod %d \n",N,from,to);
   count=count+toh(N-1,aux,to,from);
   return count+1;
}         
          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}