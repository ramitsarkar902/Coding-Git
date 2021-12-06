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
          
          
vector<bool> isPrime(10000, true);

void sieve()
{
    for(int i =2; i*i<10000; ++i)
    {
        if(isPrime[i])
        {
            for(int j =  i*i; j<10000; j+=i)
            isPrime[j] = false;
        }
    }
}




    int solve(int a,int b)
    {   
     
      if(a==b)
      return 0;
      sieve();
      
      queue<int> q;
      q.push(a);
      int ans = 0 ;
      vector<bool> visited(10000, false);
      visited[a] =  true;
      while(!q.empty())
      {
          queue<int> t;
          while(!q.empty())
          {
              int x = q.front();
              q.pop();
              if(x==b)
              return ans;
              for(int i = 0; i<4; ++i)
              {
                  if(i==0)
                  {
                      for(int j = 1; j<10; ++j)
                      {
                          string str = to_string(x);
                          str[i] = j+'0';
                          int temp = stoi(str);
                          if(temp==b)
                          return ans+1;
                          if( isPrime[temp] && visited[temp] == false)
                          {
                              visited[temp] = true;
                              t.push(temp);
                              
                          }
                      }
                  }
                  else
                  {
                      for(int j = 0; j<10; ++j)
                      {
                          string str = to_string(x);
                          str[i] = j+'0';
                          int temp = stoi(str);
                          if(temp ==b)
                          return ans+1;
                          if( isPrime[temp] && visited[temp] == false)
                          {
                              visited[temp] = true;
                              t.push(temp);
                              
                          }
                      }
                      
                  }
              }
              
          }
          q = t;
          
          ++ans;
      }

      return ans;
    }

          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}