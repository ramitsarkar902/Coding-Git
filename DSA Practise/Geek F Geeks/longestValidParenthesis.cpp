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
          
int maxLength(string S){ //O(1) time complexity-->preferrable sol
        // code here
        stack <int>st;
        st.push(-1);
        int ans=0;
        for(int i=0;i<S.size();i++){
            if(S[i]=='(') st.push(i);
            else st.pop();
            if(st.empty()) st.push(i);
            else ans=max(ans,i-st.top());
        }
        
        return ans;
    }

//long approach-->good for understanding but not implementation
int maxLength(string str)
    {
        int res = 0;
        
        int open = 0;
        int close = 0;
        
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == '(')
            {
                open++;
            }
            else
            {
                close++;
            }
            
            if(open == close)
            {
                res = max(res, 2 * open);
            }
            else if(close > open)
            {
                open = close = 0;
            }
        }
        
        open = close = 0;
        
        for(int i = str.size() - 1; i >= 0; i--)
        {
            if(str[i] == '(')
            {
                open++;
            }
            else
            {
                close++;
            }
            
            if(open == close)
            {
                res = max(res, 2 * open);
            }
            else if(open > close)
            {
                open = close = 0;
            }
        }
        
        return res;
    }        
          
          
int main(){
          /* Example 1:

Input: S = ((()
Output: 2
Explaination: The longest valid 
parenthesis substring is "()".
Example 2:

Input: S = )()())
Output: 4
Explaination: The longest valid 
parenthesis substring is "()()".
           */
          
return 0;
}