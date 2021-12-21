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
          
void combinationSumUtil(v(int) &a,int sum,v(v(int)) &res,v(int) &curr,int pos){

if(sum==0){
    res.push_back(curr);
    return;
}

if(sum<0 || pos>=a.size())return;

    curr.push_back(a[pos]);
    combinationSumUtil(a,sum-a[pos],res,curr,pos);

    curr.pop_back();
    combinationSumUtil(a,sum,res,curr,pos+1);
}
          
v(v(int)) combinationalSum(v(int) &a,int b){
    v(v(int)) res;
    sort(a.begin(), a.end());
     vector<int> current, c;
    int i, j;

    //storing only distinct elements in list C.
    for (i = 0; i < a.size(); i++)
    {
        j = i + 1;
        while (j < a.size() && a[i] == a[j])
        {
            j++;
        }
        c.push_back(a[i]);
        i = j - 1;
    }
    combinationSumUtil(c, b, res, current, 0);

    //returning the result.
    return res;
}
          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}