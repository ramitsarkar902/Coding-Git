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
#include<deque>
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
          
string solve(string st) {//will fail for one test case of interviewbit
    int n=st.size();
    deque<char>q;
    string ans="";

    q.push_front(st[0]);
    ans+=st[0];
    for(int i=1;i<n;i++){
        if(st[i]!=q.front()){
            q.push_back(st[i]);
        }
        else if(st[i]==q.front()){
            q.pop_front();
        }
        if(q.empty())ans+='#';
        else ans+=q.front();
    }
    return ans;
}      

//secure safe sol

string solveWithStack(string A) {
     stack <int> arr;
        vector <int> alpha(26,0);
        string y="";
        for(int i=0;i<A.size();i++)
        {
            alpha[A[i]-'a']++;
            string u="";
            int pp=arr.size();
            while (!arr.empty())
            {
                if(alpha[arr.top()-'a']==1)
                u+=arr.top();
                arr.pop();
            }
            
            if(pp==u.size() && alpha[A[i]-'a']==1)
            arr.push(A[i]);
            for(int j=u.size()-1;j>=0;j--)
            arr.push(u[j]);

            if(arr.empty())
            y+='#';
            else
            y+=arr.top();
    }
    return y;
}

          
          
int main(){
          string st="abcabc";
          cout<<solve(st);
          
          
return 0;
}