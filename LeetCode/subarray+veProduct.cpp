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
          
          
          

//another approach
/*
    1. keep track of number of negatives in the current window
    2. if no. of negatives are even, that whole window is current mx
    3. else if negs are odd than after removing the firt negative, that is current mx
    4. when 0 comes, set everything back to initial
    */
int getMaxLen(vector<int>& nums) {
        int l=0, r=0, f_neg=-1, negs=0, mx=0, n=nums.size();
        
        while(l<=r and r<n){
            if(nums[r]==0){
                l=r+1;
                r++;
                f_neg=-1;
                negs=0;
                continue;
            }
            
            else if(nums[r]<0){
                negs++;
                if(f_neg==-1) f_neg=r; //set first negative of the current window
            }
            
            //even number of negatives
            if(negs%2==0) mx = max(mx, r-l+1);
            
            //odd number of negatives,  consider window starting after first negative,
            // this will make number of negatives as even
            else mx = max(mx, r-f_neg);
            
            r++;
        }
        
        return mx;
    }
       
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}