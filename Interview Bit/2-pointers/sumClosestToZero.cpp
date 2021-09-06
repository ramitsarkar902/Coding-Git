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
          
int closestToZero(int arr[], int n)
        {
            // your code here 
            
            
            if(n == 1) return 2*arr[0];
		sort(arr, arr+n);
		if(arr[0] >= 0) return arr[0]+arr[1];
		if(arr[n-1] < 0) return arr[n-1]+arr[n-2];

		int  l = 0, r = n-1;
		int sum = INT_MAX, currSum;
		while(l < r){
		    currSum = arr[l]+arr[r];
			if(abs(sum) > abs(currSum)) sum = currSum;
			else if(abs(sum) == abs(currSum)) sum = max(sum, currSum);
			if(currSum == 0) return 0;
			if (currSum > 0) r--;
			else l++;
		}
		return sum;
        }          
          
          
int main(){
          
          
          
return 0;
}