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
          
          
          
          
int main(){
          int n;
          cin>>n;

          for(int i=0;i<=n;i++){
              for(int j=0;j<=(n-i);j++){
                  cout<<" ";
              }

              for(int j=0;j<=i;j++){
                  cout<<j;
                  if(i!=j)cout<<" ";
              }

              for(int j=i-1;j>=0;j--){
                  if(i!=j)
                    cout<<" ";
                    cout<<j;
              }

              cout<<endl;
          }

            for(int i=n-1;i>=0;i--){
                for(int j=0;j<=(n-i);j++){
                    cout<<" ";
                }
    
                for(int j=0;j<=i;j++){
                    cout<<j;
                     if(i!=j)cout<<" ";
                }
    
                for(int j=i-1;j>=0;j--){
                        if(i!=j)
                    cout<<" ";
                    cout<<j;
                }
    
                cout<<endl;
            }
          
          
return 0;
}