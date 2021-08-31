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
          
int solve(vector<int> &A, int B) {
    if(A.empty()) return 0;

int N = A.size() - 1;

sort(A.begin(), A.end());


       
        int i = 0, j = 1, diff = 0;
        while(i <= N && j <=N){
            diff = A[j] - A[i];
            if(i != j && diff == B) return 1;
            else if(diff < B) j++;
            else i++;
        }
        return 0;
}          
          
          
int main(){
          
          
          
return 0;
}