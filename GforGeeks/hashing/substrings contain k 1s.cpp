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
          
          

 long long int countOfSubstringWithKOnes(string s, int k){
        //complete the function here
        //1 0 0 1 0
        //1 0 0 2 0
        int arr[s.size()+1]={0};
        arr[0]=1;
        int ans=0;
        int sum=0;
        for(int i=0;i<s.size();i++){
            sum+=s[i]-'0';
            
            if(sum>=k)ans+=arr[sum-k];
            
            arr[sum]++;
            
        }
        return ans;
    }   
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}