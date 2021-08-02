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
          
int kThSmallestFactor(int N , int K) {
        pqmin pq;
        int ans;

        for(int i=1;i<=N;i++){
            if(N%i==0){
                pq.push(i);
            }
        }

        for(int i=1;i<=K;i++){
            
            if(i==K){
                ans=pq.top();
                break;
            }
            else{
                pq.pop();
            }
        }

        return ans;
    }         
          
          
int main(){
          cout<<kThSmallestFactor(4,2);
          
          
return 0;
}