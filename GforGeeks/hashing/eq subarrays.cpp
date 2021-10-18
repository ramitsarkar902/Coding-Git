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
          
int findDistinct(vector<int> &a,int n){
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)m[a[i]]++;

    return m.size();
}         
          
int solve(int arr[],int n){
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)mp[arr[i]]++;


    int distinct=mp.size();

    mp.clear();

    int ans = 0, right = 0, window = 0;
    for (int left = 0; left < n; ++left)
    {
        while (right < n && window < distinct)
        {
            ++mp[ arr[right] ];
 
            if (mp[ arr[right] ] == 1)
                ++window;
 
            ++right;
        }

        if(window == distinct)ans+=(n-right+1);

        --mp[arr[left]];

        if(mp[arr[left]]==0)--window;
    }

    return ans;

}         
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}