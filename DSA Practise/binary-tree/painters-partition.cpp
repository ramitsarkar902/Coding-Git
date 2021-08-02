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
using namespace std;

int findFeasible(int boards[],int n, int mid){
    int sum=0,painters=1;//sum is sum of boards length we can assign to one painter
    for(int i=0;i<n;i++){
        sum+=boards[i];
        if(sum>mid){
            sum=boards[i];
            painters++;
        }
    }
    return painters;
}          
          
int paintersPartition(int boards[],int n, int m){
    int totalLength=0,k=0;//k will store the largest board size and total length will store the sum of length of all boards
    for(int i=0;i<n;i++){
        k=max(k,boards[i]);
        totalLength+=boards[i];
    }
    int low=k,high=totalLength;
    while(low<high){
        int mid=(low+high)/2;
        int painters=findFeasible(boards,n,mid);
        if(painters<=m){
            high=mid;
        }else{
            low=mid-1;
        }
    }
    return low;
}         
          
int main(){
          
          
          
return 0;
}