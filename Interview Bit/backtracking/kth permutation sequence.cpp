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
          
          
int fact(int n){
    if(n>12)return INT_MAX;

    int fact=1;
    for(int i=2;i<=n;i++)fact*=i;

    return fact;
}         

string getPermu(vector<int> &arr,int k){
    int n=arr.size();
    if(n==0)return "";

    if(k>fact(n))return "";

    int f=fact(n-1);
    int posi=k/fact(n-1);
    k=k%f;
     string ans=to_string(arr[posi]);
     arr.erase(arr.begin()+posi);
     return ans+ getPermu(arr,k);
}

string getPermutation(int n, int k) {
        vector<int> arr; 
        for (int i = 1; i <= n; i++) arr.push_back(i);
        return getPermu(arr,k-1);
    }
          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}