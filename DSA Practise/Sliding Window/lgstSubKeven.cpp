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
          
          
int find(int arr[],int n,int k){
    int c=0,ans=0;
    f(i,0,k){
        if(arr[i]%2==0) c++;

        ans++;
    }
    f(i,k,n){
        if(arr[i]%2==0) c++;

        if(c==2){
            break;
        }
        ans=ans+arr[i]-arr[i-k];
}
}         
          
int main(){
          
          cout<<"hello";
          
return 0;
}