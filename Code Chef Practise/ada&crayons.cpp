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
    int t;cin>>t;while(t--){
        string str;
       cin>>str;
       int count=0,count1=0;
       int n=str.length();
       for(int i=0;i<n-1;i++)
       {
           if(str[i]=='U'&&str[i+1]=='D')
           count++;
           
           if(str[i]=='D'&&str[i+1]=='U')
           count1++;
           
       }
       if(str[n-1]=='D')
       count1++;
       else
       count++;
       
       int c=min(count,count1);
       cout<<c<<endl;
    }
          
          
          
return 0;
}   