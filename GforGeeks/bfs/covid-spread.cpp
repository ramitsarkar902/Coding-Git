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
          
          
          
int helpaterp(vector<vector<int>> hospital)
    {
        //code here
        int n=hospital.size();
        int m=hospital[0].size();
        queue<pair<int,pair<int,int>>>q;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
                if(hospital[i][j]==2){//if infected
                    pair<int,pair<int,int>> p;
                    p.first=0;//initialize the spread by 0 default
                    p.second.first=i;
                    p.second.second=j;
                    q.push(p);
                }   
            }
            int c;//count the no of infected spreading
            while(q.size()!=0){
                 pair<int,pair<int,int>>p=q.front();//taking queue first element
                c=p.first;
                int i=p.second.first;
                int j=p.second.second;
                q.pop();//popping out the element 
                if(i<n-1&&hospital[i+1][j]==1){
                hospital[i+1][j]=2;
                q.push({c+1,{i+1,j}});
            }
            if(j>0&&hospital[i][j-1]==1){
                hospital[i][j-1]=2;
                q.push({c+1,{i,j-1}});
            }
            if(i>0&&hospital[i-1][j]==1){
                hospital[i-1][j]=2;
                q.push({c+1,{i-1,j}});
            }
            if(j<m-1&&hospital[i][j+1]==1){
                hospital[i][j+1]=2;
                q.push({c+1,{i,j+1}});
            }
            }
            //if a any non infected
             for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(hospital[i][j]==1)return -1;
                
                return c;
    }         
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}