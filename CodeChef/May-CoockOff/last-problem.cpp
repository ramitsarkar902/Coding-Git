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
          
int main() {
    int t;
    cin >> t;
    long long int p, arr[1001][1001];
    arr[1][1] = 1;
    for(int i=2; i<=1000; i++)
    arr[i][1] = arr[i-1][1]+i;
    for(int i=1; i<=1000; i++)
    {
        p=i;
        for(int j=2; j<=1000; j++)
        arr[i][j] = arr[i][j-1]+p++;
    }
    while(t--)
    {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >>y2;
        long long int s=0;
        for(int i=x1; i<=x2; i++)
        s+=arr[i][y1];
        for(int i=y1+1; i<=y2; i++)
        s+=arr[x2][i];
        cout << s << endl;
    }
    return 0;
}          