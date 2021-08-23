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
          
          
int minSwaps(vector<int>&nums)
	{
	    vector<pair<int,int>> vec;
	    int result=0;
	    for(int i=0;i<nums.size();i++){
	        vec.push_back({nums[i],i});
	    }
	    sort(vec.begin(),vec.end());
	    for(int i=0;i<nums.size();i++){
	        if(i==vec[i].second){
	            continue;
	        }else{
	            result++;
	            swap(vec[i],vec[vec[i].second]);
	            i--;
	        }
	    }
	    
	    return result;
	}         
          
int main(){
          /* Example 1:

Input:
nums = {2, 8, 5, 4}
Output:
1
Explaination:
swap 8 with 4.
Example 2:

Input:
nums = {10, 19, 6, 3, 5}
Output:
2
Explaination:
swap 10 with 3 and swap 19 with 5.
           */
          
return 0;
}