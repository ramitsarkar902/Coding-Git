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
          

	struct cell{
		int x;
		int y;
		int steps;
	};

	bool isValid(int x, int y, int N){
		return (x >=0 and x < N and y >=0 and y < N);
	}
	int minStepToReachTarget(vector<int>&KnightPos, vector<int>&TargetPos, int N){
		KnightPos[0]--;
		KnightPos[1]--;
		TargetPos[0]--;
		TargetPos[1]--;
		vector<vector<bool>>vis(N, vector<bool>(N, false));
		vector<vector<int>>dxy = {{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};
		queue<cell>q;
		q.push({KnightPos[0], KnightPos[1], 0});
		vis[KnightPos[0]][KnightPos[1]] = true;
		while(!q.empty()){
			int x = q.front().x;
			int y = q.front().y;
			int steps = q.front().steps;
			q.pop();
			if(x == TargetPos[0] and y == TargetPos[1])
				return steps;
			for(int i = 0; i < dxy.size(); i++){
				int n_x = x + dxy[i][0];
				int n_y = y + dxy[i][1];
				if(isValid(n_x, n_y, N) and !vis[n_x][n_y]){
					q.push({n_x, n_y, steps+1});
					vis[n_x][n_y] = true;
				}
			}
		}
		return -1;
	}          
          
          
int main(){
          
          
          
return 0;
}