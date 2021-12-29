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
          
 bool isBeautiful(int n){
     int f[10];
     memset(f, 0,sizeof(f));
      while(n>0)             //Find frequency of each digit of the number greater than n.
        {
            int rem=n%10;
            if(rem==0)         //If we encounter any digit as '0' then return false because 0 will have frequency 0 i.e. should not be there.
                return false;
            f[rem]++;       //Update frequency in freq array
            n=n/10;
        }
        for(int i=1;i<10;i++)
        {
            if(f[i]!=0 && f[i]!=i)   //Check if for each digit the digit=frequency of that digit like 1333 
                return false;
        }
        return true;
 }         
          
int nextBeautifulNumber(int n) {
        while(true){
            if(isBeautiful(++n))return n;
        }
    }        
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}