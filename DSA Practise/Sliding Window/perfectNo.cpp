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
          

bool isPerfect(int n){
    int sum=0;
    f(i,1,n){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n) return true;

    return false; 
}         

int maxSum(int arr[],int n,int k){
    if(n<k){
        cout<<"invalid"<<endl;
        return -1;
    }
    int initial=0;
    f(i,0,k){
        initial+=arr[i];
    }


    int sum=initial;

    f(i,k,n){
        sum+=arr[i]-arr[i-k];
        initial=max(initial,sum);
    }

    return initial;
}
int NumberOfPerfect(int arr[], int n, int k){
    f(i,0,n){
        if(isPerfect(arr[i])) arr[i]=1;

        else{
            arr[i]=0;
        }
    }
    maxSum(arr,n,k);
}
          
          
int main(){
          
          
          
return 0;
}