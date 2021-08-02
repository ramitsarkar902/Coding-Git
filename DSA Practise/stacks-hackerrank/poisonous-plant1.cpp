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
#define pii pair<int, int>
#define vi vector<int>
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue <int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;
          
          
#define MAX 100005

int arr[MAX];

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0 ; i<n ; i++)
        cin>>a[i];

    stack<pair<int, int> > s;
    int ans = 0;
    for(int i=n-1 ; i>=0 ; i--){
        while(!s.empty()){
            int temp = s.top().first;
            int index = s.top().second;
            if(temp>a[i]){
                arr[i] = max(arr[i] + 1, arr[index]);
                ans = max(ans, arr[i]);
                s.pop();
            } else {
                break;
            }
        }
        s.push(make_pair(a[i], i));
    }

    cout<<ans<<endl;

    return 0;
}