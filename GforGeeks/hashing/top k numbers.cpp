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
          
          
          
vector<int> solve(int a[],int n,int k){//5, 2, 1, 3, 4,6
   vector<int> top(k + 1); 
        vector<int> ans; 
        
        // array to keep track of frequency 
        unordered_map<int, int> freq; 
      
        // iterate till the end of stream 
        for (int m = 0; m < n; m++) { 
            // increase the frequency 
            freq[a[m]]++; 
      
            // store that element in top vector 
            top[k] = a[m]; 
      
            // search in top vector for same element 
            auto it = find(top.begin(), top.end() - 1, a[m]); 
      
            // iterate from the position of element to zero 
            for (int i = distance(top.begin(), it) - 1; i >= 0; --i) { 
                // compare the frequency and swap if higher 
                // frequency element is stored next to it 
                if (freq[top[i]] < freq[top[i + 1]]) 
                    swap(top[i], top[i + 1]); 
      
                // if frequency is same compare the elements 
                // and swap if next element is high 
                else if ((freq[top[i]] == freq[top[i + 1]]) 
                         && (top[i] > top[i + 1])) 
                    swap(top[i], top[i + 1]); 
                else
                    break; 
            } 
      
            // print top k elements 
            for (int i = 0; i < k && top[i] != 0; ++i) 
                ans.push_back(top[i]);
                //cout << top[i] << ' '; 
        } 
        return ans;

}       
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}