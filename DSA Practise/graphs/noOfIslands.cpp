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
          
          
 void dfs(int rows, int cols, int i, int j, vector<vector<char>>& grid){
        if(i<0 || i>=rows || j<0 || j>=cols || grid[i][j] != '1'){
            return;
        }
        
        grid[i][j] = '2';
        dfs(rows, cols, i+1, j, grid);
        dfs(rows, cols, i-1, j, grid);
        dfs(rows, cols, i, j+1, grid);
        dfs(rows, cols, i, j-1, grid);
        dfs(rows, cols, i-1, j-1, grid);
        dfs(rows, cols, i+1, j+1, grid);
        dfs(rows, cols, i+1, j-1, grid);
        dfs(rows, cols, i-1, j+1, grid);
    }

    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int rows = grid.size();
        int cols = grid[0].size();
        if(rows == 0){
            return 0;
        }
        int is = 0;
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(grid[i][j] == '1'){
                    dfs(rows, cols, i, j, grid);
                    is++;
                }
            }
        }
        return is;
    }
/* Example 1:

Input:
grid = {{0,1},{1,0},{1,1},{1,0}}
Output:
1
Explanation:
The grid is-
0 1
1 0
1 1
1 0
All lands are connected.
Example 2:

Input:
grid = {{0,1,1,1,0,0,0},{0,0,1,1,0,1,0}}
Output:
2
Expanation:
The grid is-
0 1 1 1 0 0 0
0 0 1 1 0 1 0 
There are two islands one is colored in blue 
and other in orange.
           
           */
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
	
		int ans =numIslands(grid);
		cout << ans <<'\n';
	}
	return 0;
} 