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
          
          
int sum(int n,int i){
    int temp=0;
    while(n>0){
        temp+=n%i;
        n=n/i;

    }
    return temp;
}          
          
int main(){
          int t;cin>>t;
          while(t--){
             int q, n, l, r, enterInt, sum, min, sum2;
              cin>>n>>l>>r;
               if (n >= l && n <= r) {
            cout << n << "\n";
            continue;
        }
        
        if (n < l) {
            cout << l << "\n";
            continue;
        }
              sum2 = INT_MAX;
        min = 0;
       
        while (l < r && n / r < r) {
            int temp1 = n / r, temp2 = n % r;
            if (sum2 > temp1 + temp2) {
                sum2 = temp1 + temp2;
                min = r;
            }
            
            r = n / (temp1 + 1);
        }
        while (l <= r) {
            enterInt = n;
            sum = 0;
            for (;;) {
                if (enterInt < l) {
                    sum += enterInt;
                    if (sum < sum2) {
                        min = l;
                        sum2 = sum;
                    }
                    break;
                }
                sum += enterInt % l;
                enterInt /= l;
                if (sum >= sum2)
                    break;
            }
            l++;
        }
       cout << min << "\n";
          }
          
          
return 0;
}