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
#include<unordered_map>

#define ll long long
#define mod 1000000007 //10^9+7
              
#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
#define f(i,a,b) for(int i=a;i<b;i++)
#define fm(i,a,b) for(int i=a;i>b;i--)
#define pii pair<int, int>
#define v(x) vector<x>
#define sortv(vec) sort(vec.begin(), vec.end())
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue <int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;
          
          
          
          
          
          
//for linked list          
struct Node
{
int data;
struct Node *next;
 Node(int x)
{
data = x;
 next = NULL;
 }
};

//logic used-
/* Create an empty hash map. Let the hash map be hM.

Initialize the count of distinct elements as dist_count to 0.
Traverse through the first window and insert elements of the first window to hM. The elements are used as key and their counts as the value in hM. Also, keep updating dist_count
Print distinct count for the first window.
Traverse through the remaining array (or other windows).
Remove the first element of the previous window. 
If the removed element appeared only once, remove it from hM and decrease the distinct count, i.e. do “dist_count–“
else (appeared multiple times in hM), then decrement its count in hM
Add the current element (last element of the new window) 
If the added element is not present in hM, add it to hM and increase the distinct count, i.e. do “dist_count++”
Else (the added element appeared multiple times), increment its count in hM */
          
          
v(int) solve(v(int) &A,int B){
    vector<int>ans;
    unordered_map<int,int>mp;
    int c=0;//count no of distinct in current window

    for(int i=0;i<B;i++){
        if(mp[A[i]]==0)c++;

        mp[A[i]]++;
    }

    ans.push_back(c);

    for(int i=B;i<A.size();i++){
        if(mp[A[i-B]]==1)c--;

        mp[A[i-B]]--;

        if(mp[A[i]]==0)c++;

        mp[A[i]]++;

        ans.push_back(c);
    }
    return ans;
}         
          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}