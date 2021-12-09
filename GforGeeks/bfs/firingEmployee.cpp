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
          
          
int firingEmployees(vector<int> &arr, int n){
    //need to check prime..store in a vector
        v(int)prime(2*n+1,1);
        for(int i=2;i<=2*n;i++){
            if(prime[i]==1){
                int j=2;
                while(i*j<=2*n){
                    prime[i*j]=0;
                    j++;
                }
            }
        }

        unordered_map<int ,vector<int>> mp;
        queue<pair<int,int>> q;
        for(int i = 0; i < n ; i ++){
            mp[arr[i]].push_back(i + 1);
        }
        for(auto it:mp){
            for(auto x:it.second)cout<<x;
            
            cout<<endl;
        }

        
    }         
          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}