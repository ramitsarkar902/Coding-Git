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
#include<unordered_map>

#define ll long long
#define mod 1000000007 //10^9+7
              
#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
#define f(i,a,b) for(int i=a;i<b;i++)
#define fm(i,a,b) for(int i=a;i>b;i--)
#define pii pair<int, int>
#define v(x) vector<x>
#define sortv(vec) sort(vec.begin(), vec.end())
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue <int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;
          
          
          
//for linked list          
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
          
int trap(vector<int>& a) {
        int n=a.size();
        int i=0,j=n-1;
        int maxleft=0,maxright=0;
        int res=0;
        while(i<=j)
        {
            if(a[i]<=a[j])
            {
                if(a[i]>=maxleft)
                    maxleft=a[i];
                else
                    res+=maxleft-a[i];
                i++;
            }
            else
            {
                if(a[j]>=maxright)
                    maxright=a[j];
                else
                    res+=maxright-a[j];
                j--;
            }
        }
        return res;
    }         
//second approach using two arrays
int trap(vector<int>&s){
    int lMax[s.size()];
    int rMax[s.size()];
    int ans=0;
    lMax[0]=s[0];
    rMax[s.size()-1]=s[s.size()-1];
    for(int i=1;i<s.size();i++){
        lMax[i]=max(lMax[i-1],s[i]);
    }
    for(int i=s.size()-2;i>=0;i--){
        rMax[i]=max(rMax[i+1],s[i]);
    }
    for(int i=1;i<s.size()-1;i++){
        int minHeight=min(lMax[i-1],rMax[i+1]);
        if(minHeight>s[i])
            ans+= minHeight-s[i];
    }
    return ans;
}
          
int main(){
          
          
          
return 0;
}