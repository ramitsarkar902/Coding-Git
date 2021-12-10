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
          
          
          
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2,int n,int m) {
        int i=0,j=0,count;
        double m1=-1,m2=-1;
        for(count=0;count<=(m+n)/2;count++) {
            m2=m1;
            if(i!=n && j!=m){
                m1=(nums1[i]>nums2[j])?nums2[j++]:nums1[i++];
            }
            else if(i<n)m1=nums1[i++];
            else m1=nums2[j++];

        }
        if((m + n) % 2 == 1){
        return m1;
    }
    else{
        return (m1+m2)/2;
    }
    }         
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}