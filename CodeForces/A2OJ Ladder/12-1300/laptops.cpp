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
#include <unordered_map>

#define ll long long
#define mod 1000000007 // 10^9+7

#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
#define f(i, a, b) for (int i = a; i < b; i++)
#define fm(i, a, b) for (int i = a; i > b; i--)
#define pii pair<int, int>
#define v(x) vector<x>
#define sortv(vec) sort(vec.begin(), vec.end())
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue<int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;

// for linked list
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

//another approach can be using b vector of pair
void solve(int n){
    ll a[n], b[n];
            for (ll i = 0; i < n; ++i) {
                  cin >> a[i] >> b[i];
            }
            for (ll i = 0; i < n; ++i) {
                  if (a[i] != b[i]) {
                        cout << "Happy Alex" << endl;
                        return;
                  }
            }
 
 
            cout << "Poor Alex" << endl;
}

int main()
{
   /*  int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a != b)
        {
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";

    
 */
int n;
cin>>n;
    pair<int,int> p[100005];
    for (int i=0;i<n;i++)
    {
    cin>>p[i].first>>p[i].second;
    }
    bool flag=false;
    sort(p,p+n);
    for(int i=0;i<n-1;i++)
    {
        if(p[i].second>p[i+1].second)
        {
            flag=true;
            break;
        }
    }
    if(flag)
    cout<<"Happy Alex";
    else
    cout<<"Poor Alex";
    solve(2);
    return 0;
}