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
          
vector<string> ans;
    unordered_map<int,string> um;
    void backtrack(int a[],int n,int i,string &temp){
        if(i==n){
            ans.push_back(temp);
            return;
        }
        for(char x:um[a[i]]){
            temp.push_back(x);
            backtrack(a,n,i+1,temp);
            temp.pop_back();
        }
    }
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        string temp="";
        um[2]="abc";
        um[3]="def";
        um[4]="ghi";
        um[5]="jkl";
        um[6]="mno";
        um[7]="pqrs";
        um[8]="tuv";
        um[9]="wxyz";
        backtrack(a,N,0,temp);
        return ans;
    }
          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}