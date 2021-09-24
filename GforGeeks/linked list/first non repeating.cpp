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
          
          
          
          
          
string FirstNonRepeating(string A){
		    // Code here
		     deque<char>v;
    int x[26]={0};
    for(int i=0;i<A.length();++i)
    {
        x[A[i]-'a']++;
        if(x[A[i]-'a']==1)
        v.push_back(A[i]);
        while(v.size()!=0 && x[v.front()-'a']!=1)
        v.pop_front();
        if(v.size()==0)
        A[i]='#';
        else A[i]=v.front();
    }
    return A;
		}
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}