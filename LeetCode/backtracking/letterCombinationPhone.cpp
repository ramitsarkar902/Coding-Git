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

vector<string> res;
unordered_map<char, string> m;

    void helper(string digits, int index, string ans){
        if(index == digits.length()){
            res.push_back(ans);
            return;
        }
        char c = digits[index];
        string s = m[c];
        for(int i=0; i<s.length(); i++){
            helper(digits, index+1, ans + s[i]);
        }
    }
    
    vector<string> letterCombinations(string digits) {
        if(digits.length() == 0){
            return res;
        }
        m['2'] = "abc";
        m['3'] = "def";
        m['4'] = "ghi";
        m['5'] = "jkl";
        m['6'] = "mno";
        m['7'] = "pqrs";
        m['8'] = "tuv";
        m['9'] = "wxyz";
        helper(digits, 0, "");
        return res;
    }
          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}