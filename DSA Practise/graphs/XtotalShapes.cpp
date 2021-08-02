/* #include <cmath>
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

#define ll long long
#define mod 1000000007 //10^9+7
              
#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
#define f(i,a,b) for(int i=a;i<b;i++)
#define fm(i,a,b) for(int i=a;i>b;i--)
#define pii pair<int, int>
#define vi vector<int>
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue <int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;
          
 void dfs(vector<vector<char>>&grid, int i, int j, int n, int m) {
if (i >= n || j >= m || i < 0 || j < 0 || grid[i][j] != 'X')
return;

grid[i][j] = '0';
dfs(grid, i - 1, j, n, m);
dfs(grid, i, j - 1, n, m);
dfs(grid, i, j + 1, n, m);
dfs(grid, i + 1, j, n, m);

}
int xShape(vector<vector<char>>& grid)
{
int n = grid.size();
int m = grid[0].size();
int cnt = 0;
for (int i = 0; i < n ; i++) {
for (int j = 0; j < m ; j++) {
if (grid[i][j] == 'X') {
dfs(grid, i, j, n, m);
cnt++;
}
}
}
return cnt;
}
         
          
          
int main(){
          
          Example 1:

Input: grid = {{X,O,X},{O,X,O},{X,X,X}}
Output: 3
Explanation: 
The grid is-
X O X
O X O
X X X
So, X with same colour are adjacent to each 
other vertically for horizontally (diagonals 
not included). So, there are 3 different groups 
in the given grid.

Example 2:

Input: grid = {{X,X},{X,X}}
Output: 1
Expanation: 
The grid is- 
X X
X X
So, X with same colour are adjacent to each
other vertically for horizontally (diagonals
not included). So, there is only 1 group
in the given grid.
          
          
return 0;
} */