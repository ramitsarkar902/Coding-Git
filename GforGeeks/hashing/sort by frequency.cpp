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
          
          
vector<int> sortByFreq(int arr[],int n)//5,5,4,6,4
    {
       
       vector<int> res;
        unordered_map<int,int>mp;
         vector<pair<int , int>> hres;
        for(int i =0;i<n;i++){
            mp[arr[i]]++;
        }
        for(int i = 0; i < n; ++i) {
            if(mp.find(arr[i]) != mp.end()) {
                hres.push_back({mp[arr[i]],arr[i]});
                mp.erase(arr[i]);
            }
        }

        sort(hres.begin(),hres.end(),[&](pair<int,int> a,pair<int,int> b){
            if(a.first == b.first) return a.second < b.second;
        return a.first > b.first;
        });

         for(auto i: hres) {
            for(int j = 0; j < i.first; ++j) res.push_back(i.second);
        }
        
        return res;

 
    }          
          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}