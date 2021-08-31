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
          
vector<int> intersect(const vector<int> &A, const vector<int> &B) {
    vector<int> res;
    int i = 0, j = 0;
    
    while(i < A.size() && j < B.size()){
        if(A[i] == B[j]){
            res.push_back(A[i]);
            i++;
            j++;
        }
        else if(A[i] < B[j]) i++;
        else j++;
    }
    
    return res;
}
          
          
          
int main(){
          
          
          
return 0;
}