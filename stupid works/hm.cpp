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
          

          
          
          
int main(){
          int n,ms,k;
          cin>>n>>ms>>k;
          int arr[n];
          f(i,0,n) arr[i]=0;

          int sum=1,c=0;
        arr[k]=1;
          while(sum<ms){
              arr[k]+=1;
              sum+=1;
              c++;
              for(int i=k+1;i<n&&i<=k+c;i++){ arr[i]+=1; sum+=1;}
              for(int j=k-1;j>=0&&j>=k-c;j--) {arr[j]+=1;sum+=1;}
          }

          cout<<arr[k]-1;
          
          
return 0;
}