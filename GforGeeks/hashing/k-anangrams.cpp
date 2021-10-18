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
          
          const int MAX_CHAR = 26;
 bool areKAnagrams(string str1, string str2, int k) {
       
        if(str1.size()!=str2.size()){
            return false;
        }
         int n = str1.length();
        int count1[MAX_CHAR] = {0};
    int count2[MAX_CHAR] = {0};
 
    // Store the occurrence of all characters
    // in a hash_array
    for (int i = 0; i < n; i++)
        count1[str1[i]-'a']++;
    for (int i = 0; i < n; i++)
        count2[str2[i]-'a']++;
      
    int count = 0;
 
    // Count number of characters that are
    // different in both strings
    for (int i = 0; i < MAX_CHAR; i++)
        if (count1[i] > count2[i])
            count = count + abs(count1[i]-count2[i]);
 
    // Return true if count is less than or
    // equal to k
    return (count <= k);
    }         

   //

          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}