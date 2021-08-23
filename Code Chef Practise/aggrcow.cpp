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

//BEST PROBLEM N BINARY SEARCH  

bool possible(int num,int arr[],int n,int c){
    int cows=1,prev=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-prev>=num){
            prev=arr[i];
            cows++;
            if(cows==c) return true;
        }
    }
    return false;
}
          
int search_binary(int arr[],int n,int c){
    int a=0,b=arr[n-1],max=1;
    while(b>a){
        int mid=(a+b)/2;
        if(possible(mid,arr,n,c)){
            if(mid>max) max=mid;
            a=mid+1;
        }else{
            b=mid;
        }
    }

    return max;
}          
          
          
int main(){
    int t;cin>>t;
    while(t--){
        int n,c;cin>>n>>c;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        cout<<search_binary(arr,n,c)<<endl;
    }
          
          
          
return 0;
}