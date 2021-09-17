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

bool isPossible(vi &a,int b,int x){
    int minStudents=1;
    int sum=0;
    f(i,0,a.size()){
        if(a[i]>x)return false;
        if(sum+a[i]>x){
            minStudents++;
            sum = a[i]; 
                    if (minStudents > b) return false;
        }else sum+=a[i];
    }
    return true;
}
          
int books(vi a,int b){
    int n=a.size();
    if(b<n)return -1;

    ll sum=0;
    f(i,0,n) sum+=a[i];

    ll start=0,end=sum,mid;
    ll ans=INT_MAX;

    while(start<=end){
        mid=start+(end-start)/2;
        if(isPossible(a,b,mid)){
            ans=min(ans,mid);
            end=mid-1;

        }else{
            start=mid+1;
        }
    }
    return ans;

}          
          
          
int main(){
          
          
          
return 0;
}