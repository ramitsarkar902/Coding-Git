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

int dp[101][101];

/* To handle all cases, two possibilities need to be considered.

a) If first character of C matches with first character of A, we move one character ahead in A and C and recursively check.

b) If first character of C matches with first character of B, we move one character ahead in B and C and recursively check. */

/* If any of the above two cases is true, we return true, else false. */

bool isInterLeav(string A, string B, string C, int i, int j, int k)
{
    if (k == 0)
        return 1;
    if (dp[i][j] != -1)
        return dp[i][j];
    int a = 0, b = 0;
    if (i - 1 >= 0 && A[i - 1] == C[k - 1])
        a = isInterLeav(A, B, C, i - 1, j, k - 1);
    if (j - 1 >= 0 && B[j - 1] == C[k - 1])
        b = isInterLeav(A, B, C, i, j - 1, k - 1);
    return dp[i][j] = a || b;
}
bool isInterleave(string A, string B, string C)
{
    //Your code here
    int i = A.size();
    int j = B.size();
    int k = C.size();
    if (i + j != k)
        return 0;
    memset(dp, -1, sizeof(dp));
    return isInterLeav(A, B, C, i, j, k);
}

int main()
{

    cout << isInterleave("YX", "x", "XXY");

    return 0;
}