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
          
int solve(vector<int> a,int low,int high,int key){
    if(low>high) return -1;

    int mid=low+(high-low)/2;
    if(a[mid]==key)return mid;

    if(a[low]<=a[mid]){

        if(key>=a[low]&& key<=a[mid])return solve(a,low,mid-1,key);

        return solve(a,mid+1,high,key);
    }

    if (key >= a[mid] && key <= a[high])
        return solve(a, mid + 1, high,key);
 
    return solve(a, low, mid - 1, key);

    
}         
          
          
int main(){
          
          
          
return 0;
}