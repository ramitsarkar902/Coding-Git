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
          
string multiply(string A, string B) {
     int m = A.size(), n = B.size();
    string ans(m + n, '0');
    
    for(int i = m - 1; i >= 0; --i){
        for(int j = n - 1; j >= 0; --j){
            int sum = (A[i] - '0') * (B[j] - '0') + (ans[i + j + 1] - '0');
            ans[i + j + 1] = (sum % 10) + '0';
            ans[i + j] += (sum / 10);
        }
    }
    
    for(int i = 0; i < m + n; ++i){
        if(ans[i] != '0')
            return ans.substr(i);
    }
    return "0";
}
         
          
          
int main(){
          
          
          
return 0;
}