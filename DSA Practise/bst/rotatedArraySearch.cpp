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
          
          
int searchInRotatedArray(int arr[],int key, int left,int right){
    if(left>right) return -1;

    int mid=(left+right)/2;
    if(arr[mid]==key){
        return mid;
    }

    if(arr[mid]>=arr[left]){
        if(key >=arr[left] && key<=arr[mid]){
            return searchInRotatedArray(arr,key,left,mid-1);
        }
        return searchInRotatedArray(arr,key,mid+1,right);
    }
    if(key <=arr[right] && arr[mid]<=key){
        return searchInRotatedArray(arr,key,mid+1,right);
    }
    return searchInRotatedArray(arr,key,left,mid-1);
}         
          
int main(){
          
          
          
return 0;
}