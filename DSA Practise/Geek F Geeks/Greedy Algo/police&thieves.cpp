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
          
int catchThieves(char arr[], int n, int k) 
    { 
    	int result = 0; 
    	vector<int> thief; 
    	vector<int> police; 
    
    	for (int i = 0; i < n; i++) { 
    		if (arr[i] == 'P') 
    			police.push_back(i); 
    		else if (arr[i] == 'T') 
    			thief.push_back(i); 
    	} 
 
    	int l = 0, r = 0; 
    	while (l < thief.size() && r < police.size()) { 
    
    		// can be caught 
    		if (abs(thief[l] - police[r]) <= k) { 
    			result++; 
    			l++; 
    			r++; 
    		} 
    
    	
    		else if (thief[l] < police[r]) 
    			l++; 
    		else
    			r++; 
    	} 
    	return result; 
    }           
          
          
int main(){
    /* Input:
N = 5, K = 1
arr[] = {P, T, T, P, T}
Output: 2
Explanation: Maximum 2 thieves can be 
caught. First policeman catches first thief 
and second police man can catch either second 
or third thief. */
          
return 0;
}