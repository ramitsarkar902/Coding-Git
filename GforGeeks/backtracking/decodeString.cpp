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
          
bool isDigit(char x){
    if(x>='a' && x<='z')return true;

    return false;
}          
          
string decodedString(string s){
    stack<int> count;  
        stack<string> result; 
        int index = 0;  
        string curr_string = "";   
        
        while(index < s.length()) { 
            if(isdigit(s[index])) {
                int num = 0;  
                while(isdigit(s[index])) {
                    num = 10 * num + (s[index] - '0');  
                    index++;
                }
                count.push(num);
            }
            else if(s[index] == '[') {
                result.push(curr_string); 
                curr_string = "";
                index = index + 1;  
            }
            else if(s[index] == ']') {
                int n = count.top(); count.pop();   
                string res = result.top();result.pop();    
                for(int i = 0; i < n; ++i) {
                    res += curr_string;  
                }
                curr_string = res;  
                index = index + 1;  
            }else {
                curr_string += s[index]; 
                index = index + 1;  
            }
        }
        
        return curr_string;  
    } 

        
          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}