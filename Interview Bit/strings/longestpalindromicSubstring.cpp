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
          
string lps(string &str){
    int n=str.length();
    bool dp[n][n];

    memset(dp,0,sizeof(dp));
    //for substrings of length 1
    int maxLength=1;
    f(i,0,n){
        dp[i][i]=true;
    }


    //for length 2
    int start=0;
    f(i,0,n){
        if(str[i]==str[i+1]){
            dp[i][i+1]=true;
            maxLength=2;
            start=i;
        }
    }

    //for >2 length
      for (int k = 3; k <= n; ++k) {
        // Fix the starting index
        for (int i = 0; i < n - k + 1; ++i) {
            // Get the ending index of substring from
            // starting index i and length k
            int j = i + k - 1;
 
            // checking for sub-string from ith index to
            // jth index iff str[i+1] to str[j-1] is a
            // palindrome
            if (dp[i + 1][j - 1] && str[i] == str[j]) {
                dp[i][j] = true;
 
                if (k > maxLength) {
                    start = i;
                    maxLength = k;
                }
            }
        }
    }

    //lps
    string ans="";
    for(int i=start;i<=(start+maxLength-1);i++){
        ans+=str[i];
    }

    return ans;


}         
          
          
int main(){
          
          
          
return 0;
}