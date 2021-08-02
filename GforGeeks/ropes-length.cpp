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

#define ll long long
#define mod 1000000007 //10^9+7
              
#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
using namespace std;
          
          
stack<int> sortStack(stack<int> &input)
{
    stack<int> tmpStack;
  
    while (!input.empty())
    {
        
        int tmp = input.top();
        input.pop();
  
       
        while (!tmpStack.empty() && tmpStack.top() < tmp)
        {
          
            input.push(tmpStack.top());
            tmpStack.pop();
        }
  
       
        tmpStack.push(tmp);
    }
  
    return tmpStack;
}

int calc(stack<int> &s){
    int sum=0;int c=0;int temp=0;
    while(!s.empty()){
         if(c==2){
             c==0;
             s.push(temp);
             sum+=temp;
             temp=0;
        }
        else{
        temp+=s.top();
        s.pop();
        c++;
        }
    }

    return sum;
}
          
int main(){
          int t,n;
          cin>>t;
          while(t--){
              cin>>n;
              stack <int> st;
              int x;
              for(int i=0;i<n;i++){
                  cin>>x;
                  st.push(x);
              }
              stack <int> temp=sortStack(st);
               while(!temp.empty()){
                  cout<<temp.top()<<" ";
                  temp.pop();
              }
              int res=calc(temp);
              //cout<<res<<endl;
            }
          
          
return 0;
}