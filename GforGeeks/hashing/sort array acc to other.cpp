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
          
          
vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        //Your code here
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<N;i++)mp[A1[i]]++;
        
        for(int i=0;i<M;i++){
            if(mp[A2[i]]!=0){
                for(int j=1;j<=mp[A2[i]];j++)ans.push_back(A2[i]);
                
                mp.erase(A2[i]);
            }
        }
         int a=ans.size();
        for(auto x:mp){
             int k=x.second;
           while(k>0){
               ans.push_back(x.first);
               k--;
           }
        }
             sort(ans.begin()+a,ans.end());
        return ans;
    }           
          
          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}