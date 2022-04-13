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
#include <unordered_map>

#define ll long long
#define mod 1000000007 // 10^9+7

#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
#define f(i, a, b) for (int i = a; i < b; i++)
#define fm(i, a, b) for (int i = a; i > b; i--)
#define pii pair<int, int>
#define v(x) vector<x>
#define sortv(vec) sort(vec.begin(), vec.end())
#define pqmax priority_queue<int>
#define pqmin priority_queue<int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;

// for linked list
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

bool isValid(int x,int y,int n,int m){
        if(x<0 || x>=n || y<0 || y>=m)return 0;
        return 1;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        
        
        int dx[8]={-1,-1,-1,0,1,1,1,0};
        int dy[8]={-1,0,1,1,1,0,-1,-1};
        
        // create a ans vector to store next state
        
        vector<vector<int>>ans(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int live=0;
                
                // move in ll eight direction and count the no. of live cells
                for(int k=0;k<8;k++){
                    int cx=i+dx[k];
                    int cy=j+dy[k];
                    if(isValid(cx,cy,n,m) && board[cx][cy]==1){
                        live++;
            
                    }
                }
            
                // Check if current cell is live or dead and apply rules accordingly and update ans vector
                if(board[i][j]==1){
                    if(live<2 || live >3){
                        ans[i][j]=0;
                    }else if(live==2 ||live==3){
                        ans[i][j]=1;
                    }
                }
                else{
                    if(live==3){
                        ans[i][j]=1;
                    }else{
                        ans[i][j]=0;
                    }
                }
            }
        }
        // update board to next state
        board=ans;
    }
int main()
{

    return 0;
}