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
          
          
          
vector<int> solve(string a, vector<string>&arr){/* S: "barfoothefoobarman"
                                                    L: ["foo", "bar"]
                                                    You should return the indices: [0,9]. */
    int word_size=arr[0].size();//3
    int word_count=arr.size();//2

    int n=word_size*word_count;//6
    vector<int>res;
    if(n>a.size())return res;

    unordered_map<string,int>mp;
    for(int i=0;i<word_count;i++)mp[arr[i]]++;

    for(int i=0;i<a.size()-n+1;i++){
        unordered_map<string,int>temp(mp);

        int j=i,c=word_count;

        while(j<i+n){
                string st = a.substr(j, word_size);

                if(mp.find(st)==mp.end()||temp[st]==0)break;
                else{
                    temp[st]--;
                    c--;
                }
                j+=word_size;
        }
        if(c==0)res.push_back(i);
    }
    return res;
}         
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}