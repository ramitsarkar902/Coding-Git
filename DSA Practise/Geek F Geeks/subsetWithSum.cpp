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
          
          
bool isSubsetSum(int N, int arr[], int sum){    
    bool subset[N + 1][sum + 1];
 
    
    for (int i = 0; i <= N; i++)
        subset[i][0] = true;
 
    
    for (int i = 1; i <= sum; i++)
        subset[0][i] = false;
 
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= sum; j++) {
            if (j < arr[i - 1])
                subset[i][j] = subset[i - 1][j];
            if (j >= arr[i - 1])
                subset[i][j] = subset[i - 1][j]
                               || subset[i - 1][j - arr[i - 1]];
        }
    }
 
    
 
    return subset[N][sum];
    }

    

        
          
int main(){
          
          
          
return 0;
}