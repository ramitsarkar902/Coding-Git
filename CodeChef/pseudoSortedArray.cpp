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
#define pqmax priority_queue<int>
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
          
          
          
          
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;int arr[n];
        f(i,0,n){
            cin>>arr[i];
        }
        int cnt = 0;
        f(i,1,n){
            if(arr[i] <arr[i-1]){
                swap(arr[i-1],arr[i]);
                cnt++;
            }
        }
        if(cnt<=1)cout<<"YES"<<endl;
        else cout<<"NO";
    
    }
          
          
          
return 0;
}