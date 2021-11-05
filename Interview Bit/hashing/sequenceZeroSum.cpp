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
          
          
v(int) solve(v(int) &a){
    vector<int> res; 
    int s,e; 
    int len = -1; 
    unordered_map<int, int>m; 
    int sum = 0; 
    int  i = 0; 
    m[0] = -1;
    
    while( i <a.size()){
    
       sum = sum +a[i];  
       if(m.count(sum)!=0){
         if(i - m[sum] > len ){
             s = m[sum]+1;
             e = i; 
             len =i - m[sum]  ;
         }  
       }
       else{
          m[sum] = i;
       }
       i++; 
    }
    
    for(int i =s;i<=e;i++){
        res.push_back(a[i]); 
    } 
    
    return res;   
}          
          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}