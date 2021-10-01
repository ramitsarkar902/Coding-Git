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

void printSolution(vector<vector<int>> &board)
{
    int N=board.size();
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf(" %d ", board[i][j]);
        printf("\n");
    }
}

bool isSafe(vector<vector<int>> &board,int row,int col){
    int i,j;
    for(i=0;i<col;i++){
        if(board[row][i])return false;
    }
     for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;
  
    /* Check lower diagonal on left side */
    for (i = row, j = col; j >= 0 && i < board.size(); i++, j--)
        if (board[i][j])
            return false;
  
    return true;

}         
          
bool solve(vector<vector<int>>&board,int  col){
    int n=board.size();
    if(col>=n)return true;

    for(int i=0;i<n;i++){
        if(isSafe(board,i,col)){
            board[i][col]=1;

            if(solve(board,col+1))return true;

            board[i][col]=0;
        }
    }
    return false;
}          
          
          
          
          
          
          
          
          
          
int main(){
    int N=4;
   
           vector<vector<int>>board= { { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 } };
  
    if (solve(board, 0) == false) {
        printf("Solution does not exist");
        return false;
    }
  
    printSolution(board);
    return true;
          
          
return 0;
}