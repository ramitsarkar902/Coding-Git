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
          
          
          
string solve(string a, string b){
    unordered_map<char,int>mp;
    for(int i=0;i<b.size();i++)mp[b[i]]++;

    int distinct =mp.size();
    
    int i=0,j=0;int c=distinct,ans=INT_MAX;int start=0;
    while(j<a.size()){
        mp[a[j]]--;
        if(mp[a[j]]==0)c--;

        if(c==0){
            while(c==0){
                if(ans>j+1-i){
                    ans=min(ans,j-i+1);
                    start=i;
                }

                mp[a[i]]++;
                if(mp[a[i]]>0)c++;

                i++;
            }
        }
        j++;
    }
     if (ans != INT_MAX)
        return a.substr(start, ans);
    else
        return "";


}         
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}