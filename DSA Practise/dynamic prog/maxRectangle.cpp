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

#define f(i, a, b) for (int i = a; i < b; i++)
#define fm(i, a, b) for (int i = a; i > b; i--)
#define pii pair<int, int>
#define vi vector<int>
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue<int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;
#define MAX 1000

int getMaxArea(int arr[], int n) //get the max area of an array represented as a histogram rectangle
{

    //we create an empty stack here.
    stack<int> s;
    //we push -1 to the stack because for some elements there will be no previous
    //smaller element in the array and we can store -1 as the index for previous smaller.
    s.push(-1);
    int area = arr[0];
    int i = 0;
    //We declare left_smaller and right_smaller array of size n and initialize them with -1 and n as their default value.
    //left_smaller[i] will store the index of previous smaller element for ith element of the array.
    //right_smaller[i] will store the index of next smaller element for ith element of the array.
    vector<int> left_smaller(n, -1), right_smaller(n, n);
    while (i < n)
    {
        while (!s.empty() && s.top() != -1 && arr[s.top()] > arr[i])
        {
            //if the current element is smaller than element with index stored on the
            //top of stack then, we pop the top element and store the current element index
            //as the right_smaller for the poped element.
            right_smaller[s.top()] = i;
            s.pop();
        }
        if (i > 0 && arr[i] == arr[i - 1])
        {
            //we use this condition to avoid the unnecessary loop to find the left_smaller.
            //since the previous element is same as current element, the left_smaller will always be the same for both.
            left_smaller[i] = left_smaller[i - 1];
        }
        else
        {
            //Element with the index stored on the top of the stack is always smaller than the current element.
            //Therefore the left_smaller[i] will always be s.top().
            left_smaller[i] = s.top();
        }
        s.push(i);
        i++;
    }
    for (int j = 0; j < n; j++)
    {
        //here we find area with every element as the smallest element in their range and compare it with the previous area.
        // in this way we get our max Area form this.
        area = max(area, arr[j] * (right_smaller[j] - left_smaller[j] - 1));
    }
    return area;
}

int maxArea(int M[MAX][MAX], int n, int m)
{
    // Your code here
    int dp[m];
    memset(dp, -1, sizeof(dp));

    for (int i = 0; i < m; i++)
    {
        dp[i] = M[0][i];
    }

    int ans = getMaxArea(dp, m);

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (M[i][j] == 1)
                dp[j] += 1;
            if (M[i][j] == 0)
                dp[j] = 0;
        }
        ans = max(ans, getMaxArea(dp, m));
    }

    return ans;
}

int main()
{

    /* Given a binary matrix. Find the maximum area of a rectangle formed only of 1s in the given matrix.

Example 1:

Input:
n = 4, m = 4
M[][] = {{0 1 1 0},
         {1 1 1 1},
         {1 1 1 1},
         {1 1 0 0}}
Output: 8
Explanation: For the above test case the
matrix will look like
0 1 1 0
1 1 1 1
1 1 1 1
1 1 0 0
the max size rectangle is 
1 1 1 1
1 1 1 1
and area is 4 *2 = 8. */

    return 0;
}