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
#define f(i, a, b) for (int i = a; i < b; i++)
#define fm(i, a, b) for (int i = a; i > b; i--)
#define pii pair<int, int>
#define vi vector<int>
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue<int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;

vi get(int n,int x,int mid,vi &v){
   
    if(x==0){
        f(i,0,mid){
            v[i]=1;
        }
        f(i,mid,n){
            v[i]=0;
        }
        return v;
    }else{
        swap(v[mid-x],v[mid-x+1]);
        return v;
    }
}

void display(vi &temp){
    f(i,0,temp.size()){
        if(temp[i]==1)cout<<'(';
        else cout<<')';
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
       int mid=(2*n)/2;
       vi temp(2*n,-1);
        f(i, 0, n)
        {
            
            temp = get((2*n),i,mid,temp);
           
           display(temp);
           cout<<endl;
           
        }
    }

    return 0;
}