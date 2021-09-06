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
          
string substr(string s, int st, int len){
    string res;
    for(int i = 0; i < len; i++)
        res += s[st + i];
    
    return res;
}
int strStr(const string s, const string x) {
   int xle = x.length();
    int sle = s.length();
    
    if(s == x || xle == 0)
        return 0;
        
    for(int i = 0; i < sle; i++){
        if(s[i] == x[0]){
            if(substr(s, i, xle) == x)
                return i;
        }
    }
        return -1;
}          
          
          
int main(){
          
          
          
return 0;
}