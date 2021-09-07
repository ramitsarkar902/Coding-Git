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
          
vector<string> prettyJSON(string A) {
     auto r = 0; //vector rows
    vector<string> result(1, "");
    int brace = 1;
    for (auto i = 0; i<A.length(); ++i)
    {
        switch(A[i])
        {
            case ' ':
                continue;
                
            case '{':
            case '[':
                if(brace==1 && r==0)
                    result[r] += A[i];
                else
                {
                    result.push_back("");
                    result[++r] += string(brace, '\t');
                    result[r] += A[i];
                    ++brace;
                }
                result.push_back("");
                result[++r] += string(brace, '\t');
                break;
                
            case '}':
            case ']':
                if (brace>1)
                {
                    result.push_back("");
                    result[++r] += string(brace-1, '\t');
                    result[r] += A[i];
                    --brace;
                }
                else
                {
                    result.push_back("");
                    result[++r] += A[i];
                    --brace;
                }
                break;
                
            case ',':
                result[r] += A[i];
                if (A[i+1]=='{' || A[i+1]=='[')
                    continue;
                else
                {
                    result.push_back("");
                    result[++r] += string(brace, '\t');
                }
                break;
                
            case ':':
                result[r] += A[i];
                if (A[i+1]=='{' || A[i+1]=='[')
                {
                    result.push_back("");
                    result[++r] += string(brace, '\t');
                    result[r] += A[++i];
                    ++brace;
                    if(A[i+1]!='{' && A[i+1]!='[')
                    {
                        result.push_back("");
                        result[++r] += string(brace, '\t');
                        result[r] += A[++i];
                    }
                }
                break;
                
            default:
                result[r] += A[i];
                break;
        }
    }
    return result;
}         
          
          
int main(){
          
          
          
return 0;
}