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
          
int solve(vector<vector<int> > &mat, int k) {
    int N=mat.size();
     if (k > N) return -1;
 
    // 1: PREPROCESSING
    // To store sums of all strips of size k x 1
    int stripSum[N][N];
 
    // Go column by column
    for (int j=0; j<N; j++)
    {
        // Calculate sum of first k x 1 rectangle
        // in this column
        int sum = 0;
        for (int i=0; i<k; i++)
            sum += mat[i][j];
        stripSum[0][j] = sum;
 
        // Calculate sum of remaining rectangles
        for (int i=1; i<N-k+1; i++)
        {
            sum += (mat[i+k-1][j] - mat[i-1][j]);
            stripSum[i][j] = sum;
        }
    }
 
    // max_sum stores maximum sum and its
    // position in matrix
    int max_sum = INT_MIN, *pos = NULL;
 
    // 2: CALCULATE SUM of Sub-Squares using stripSum[][]
    for (int i=0; i<N-k+1; i++)
    {
        // Calculate and print sum of first subsquare
        // in this row
        int sum = 0;
        for (int j = 0; j<k; j++)
            sum += stripSum[i][j];
 
        // Update max_sum and position of result
        if (sum > max_sum)
        {
            max_sum = sum;
            pos = &(mat[i][0]);
        }
 
        // Calculate sum of remaining squares in
        // current row by removing the leftmost
        // strip of previous sub-square and adding
        // a new strip
        for (int j=1; j<N-k+1; j++)
        {
            sum += (stripSum[i][j+k-1] - stripSum[i][j-1]);
 
            // Update max_sum and position of result
            if (sum > max_sum)
            {
                max_sum = sum;
                pos = &(mat[i][j]);
            }
        }
    }
    return max_sum;
}
         
          
          
int main(){
          
          
          
return 0;
}