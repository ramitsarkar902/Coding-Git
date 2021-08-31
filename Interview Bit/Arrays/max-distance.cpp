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
          
int maxIndexDiff(int arr[], int n)
{
 
        int rightMax[n];
        rightMax[n-1]= arr[n-1];
        for(int i = n-2; i>=0; i--)
            rightMax[i] = max(rightMax[i+1] , arr[i]);
         
        //rightMax[i] = max{ arr[i...(n-1] }
 
 
         
        int maxDist = INT_MIN;
        int i = 0, j = 0;
        while(i<n && j<n)
        {
            if(rightMax[j] >= arr[i])
            {
                maxDist = max( maxDist, j-i );
                j++;
            }
            else // if(rightMax[j] < leftMin[i])
                i++;
        }
         
        return maxDist;
         
         
}
 

int main()
{
    int arr[] = { 34,8,10,3,2,80,30,33,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxDiff = maxIndexDiff(arr, n);
    cout << maxDiff;
    return 0;
}       
          
          
