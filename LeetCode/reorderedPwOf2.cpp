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
          
          
          
bool reorderedPowerOf2(int n){
    v(string)v;
    f(i,0,31){
        int x=pow(2,i);
        v.push_back(to_string(x));
    }
    f(i,0,31)sort(v[i].begin(),v[i].end());
    string s=to_string(n);
    sort(s.begin(),s.end());
    f(i,0,31){
        if(s==v[i])return true;
    }

    return false;
}        
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}