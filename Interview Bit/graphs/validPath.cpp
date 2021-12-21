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
          
// these are the moves which i can take from any position i,j 
int dpx[8]={1,1,1,-1,-1,-1,0,0};
int dpy[8]={-1,1,0,1,-1,0,-1,1};

// this function is used to check wheter the i,j column lies inside the rectangle or not
bool valid(int x,int y,int A,int B){
    if(x<0||x>A||y<0||y>B){
        return false;
    }
    return true;
}

// this function check wheter the point x,y lies inside any circle or not
bool inCircle(int x,int y,int C,int D,vector<int>&E,vector<int>&F){
    for(int i=0;i<C;i++){
        if(((x-E[i])*(x-E[i])+(y-F[i])*(y-F[i]))<=(D*D))
         return true;
    }
    return false;
}

string solve(int A, int B, int C, int D, vector<int> &E, vector<int> &F) {
          // visited array
          bool vis[A+1][B+1];
          memset(vis,false,sizeof(vis));
          queue<pair<int,int>> myque;
          myque.push({0,0});
          vis[0][0]=true;
          // first checking wheter the point (0,0) lies in circle or not
          if(inCircle(0,0,C,D,E,F))
           return "NO";
          
          
          while(myque.size()){
              // pick first element of queue
              pair<int,int> temp=myque.front();
              myque.pop();
              // checking all 8 possible moves
              for(int i=0;i<8;i++){
                  int a=temp.first+dpx[i];
                  int b=temp.second+dpy[i];
                  if(!vis[a][b]&&valid(a,b,A,B)&&!inCircle(a,b,C,D,E,F)){
                     
                      myque.push({a,b});
                      vis[a][b]=true;
                  }
              }
          } 
          if(vis[A][B])
          return "YES";
          else
          return "NO";
    
}
          
int main(){
          
          
          
return 0;
}