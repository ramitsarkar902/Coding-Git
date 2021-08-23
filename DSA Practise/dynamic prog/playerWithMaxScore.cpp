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
#define f(i, a, b) for (int i = a; i < b; i++)
#define fm(i, a, b) for (int i = a; i > b; i--)
#define pii pair<int, int>
#define vi vector<int>
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue<int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;

int dp[1000][1000];
int optimalGame(int arr[], int i, int j)
{
    if (i > j)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    int op1 = max(arr[i] + min(optimalGame(arr, i + 1, j - 1), optimalGame(arr, i + 2, j)), arr[j] + min(optimalGame(arr, i, j - 2), optimalGame(arr, i + 1, j - 1)));

    return dp[i][j] = op1;
}
bool is1winner(int N, int arr[])
{
    int ans = 0;
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < N; i++)
        ans += arr[i];

    int ans2 = optimalGame(arr, 0, N - 1);
    return ans2 > (ans - ans2);
}

int main()
{

/* Given an array arr of non-negative integers of size N, 2 players are playing a game. In each move, a player chooses an element from either end of the array, and the size of the array shrinks by one. Both players take alternate chances and the game continues until the size of the array becomes 0. Every time a player chooses an array element the array value is added to the player's score. At the end player with maximum score wins.
You have to predict whether player 1 will win the game or not. Both players will play optimally.
 

Example 1:

Input:
N = 3
arr[] = {2,6,3}
Output:
0 
Explanation:
Initially, player 1 can choose between 2 and 3. 
If he chooses 3 (or 2), then player 2 can choose 
from 2 (or 3) and 6. If player 2 chooses 6,
then player 1 will be left with 2 (or 3). 
So, final score of player 1 is 2 + 3 = 5,
and player 2 is 6. 
Hence, player 1 will never be the winner and 
output is 0. */

    return 0;
}