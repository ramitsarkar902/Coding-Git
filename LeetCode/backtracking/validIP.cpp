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
          
 bool isValid(string &s , int indx , int len){
        if (indx + len > s.size()) return false;
        
        string _found = s.substr(indx , len);
        
        if (_found.size() > 1 && _found[0] == '0') return false;
        
        int num = stoi(_found);
        
        if (num > 255) return false;
        
        return true;
    }
    void recur(string &s , int indx , int used , vector<string> &res , string curr){
        if (indx == s.size() && used == 4){
            curr.pop_back();
            res.push_back(curr);
            return;
        }
        if (indx >= s.size() || used >= 4){
            return;
        }
        if (isValid(s , indx , 1)){
            recur(s , indx + 1 , used + 1 , res , curr + s.substr(indx,1) + ".");
        }
        if (isValid(s , indx , 2)){
            recur(s , indx + 2 , used + 1 , res , curr + s.substr(indx,2) + ".");
        }
        if (isValid(s , indx , 3)){
            recur(s , indx + 3 , used + 1 , res , curr + s.substr(indx,3) + ".");
        }
    }
    
    vector<string> restoreIpAddresses(string s) {
        if (s.size() > 12) return {};
        vector<string> res;
        string curr = "";
        recur(s , 0 , 0 , res , curr);
        
        return res;
    }      
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}