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
          
          
          
int solve(int* a,int n,int b){
    unordered_map<int, int>mp;int sum=0,c=0;//4 3 2 3 4     // 0 1 0 1 0  //0 1 1 2 0
    for(int i = 0; i<n; i++){
        if(a[i] % 2 == 0) a[i] = 0;
        else a[i] = 1; // odd nos become 1. Now subarrays with sum = B should be found
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum==b)c++;

        if(mp.find(sum-b)!=mp.end())c+=mp[sum-b];

         mp[sum]++;
    }

    return c;

}       
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}