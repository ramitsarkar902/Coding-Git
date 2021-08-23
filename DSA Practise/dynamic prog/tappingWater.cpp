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

int trappingWater(int arr[], int n)
{
    // Code here
    int water = 0;
    int start = 0, end = n - 1;
    int leftmax = 0, rightmax = 0;

    while (start < end)
    {

        leftmax = max(leftmax, arr[start]);
        rightmax = max(rightmax, arr[end]);//2 4 3 8

        if (leftmax < rightmax)
            water += leftmax - arr[start++];

        else
            water += rightmax - arr[end--];
    }

    return water;
}

int main()
{
    /* Input:
N = 4
arr[] = {7,4,0,9}
Output:
10
Explanation:
Water trapped by above 
block of height 4 is 3 units and above 
block of height 0 is 7 units. So, the 
total unit of water trapped is 10 units. */

    return 0;
}