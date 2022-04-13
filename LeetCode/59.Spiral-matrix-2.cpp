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
          
 vector<vector<int>> generateMatrix(int n) {
         vector<vector<int>> res(n,vector<int>(n,0));
    int left=0,right=n-1,top=0,bottom=n-1;
    int x=1;
    while(x<=n*n){
        //for the top part from left to right
        for(int i=left;i<=right;i++)
            res[top][i]=x++;
        top++;
        //for the right part from top to bottom 
        for(int i=top;i<=bottom;i++)
            res[i][right]=x++;
        right--;
        //for the bottom part from right to left fill
        for(int i=right;i>=left;i--)
            res[bottom][i]=x++;
        bottom--;
        //for the left part fill from bottom to top
        for(int i=bottom;i>=top;i--)
            res[i][left]=x++;
        left++;
    }
    return res;
    }         
          
          
int main(){
          
          
          
return 0;
}