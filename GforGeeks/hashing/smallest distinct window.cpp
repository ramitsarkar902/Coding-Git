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
          
          
  const int MAX_CHARS = 256;         
string solve(string str){
 int n = str.length();
 
    // if string is empty or having one char
    if (n <= 1)
        return str;
 
    // Count all distinct characters.
    int dist_count = 0;
    bool visited[MAX_CHARS] = { false };
    for (int i = 0; i < n; i++) {
        if (visited[str[i]] == false) {
            visited[str[i]] = true;
            dist_count++;
        }
    }
 
    // Now follow the algorithm discussed in below
    // post. We basically maintain a window of characters
    // that contains all characters of given string.
    int start = 0, start_index = -1, min_len = INT_MAX;
 
    int count = 0;
    int curr_count[MAX_CHARS] = { 0 };
    for (int j = 0; j < n; j++) {
        // Count occurrence of characters of string
        curr_count[str[j]]++;
 
        // If any distinct character matched,
        // then increment count
        if (curr_count[str[j]] == 1)
            count++;
 
        // if all the characters are matched
        if (count == dist_count) {
            // Try to minimize the window i.e., check if
            // any character is occurring more no. of times
            // than its occurrence in pattern, if yes
            // then remove it from starting and also remove
            // the useless characters.
            while (curr_count[str[start]] > 1) {
                if (curr_count[str[start]] > 1)
                    curr_count[str[start]]--;
                start++;
            }
 
            // Update window size
            int len_window = j - start + 1;
            if (min_len > len_window) {
                min_len = len_window;
                start_index = start;
            }
        }
    }
 
    // Return substring starting from start_index
    // and length min_len
    return str.substr(start_index, min_len);
    }
        
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}