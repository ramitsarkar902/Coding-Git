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
#define pqmax priority_queue<int>
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
          

// store lower K elements
    set<pair<int, int>, greater<>>MaxHeap;
    
    // store upper K elements
    set<pair<int, int>>MinHeap;
    
    // store mid range elements
    set<pair<int, int>>MidHeap;
    
    // store all previous values
    queue<int>vals;

    int M, K;
    int count;
    long long Sum;
    int midLength;

     MKAverage(int m, int k) {

        M = m;
        K = k;
        Sum = 0L;
        count = 0;
        midLength = M - 2 * K;
    }

    void addElement(int num) {

        count++;
        vals.push(num);

        // stream has more than M element and so need to remove previous element
        if (count > M)
        {
            // get previous target element
            pair<int, int> target = { vals.front(),count - M };
            vals.pop();
            
            // if target is in MaxHeap then remove it and insert min value from MidHeap
            if (MaxHeap.find(target) != MaxHeap.end())
            {
                MaxHeap.erase(target);
                MaxHeap.insert(*MidHeap.begin());
                Sum -= (*MidHeap.begin()).first;
                MidHeap.erase(MidHeap.begin());
            }
            
            // if target is in MinHeap then remove it and insert max value from MidHeap            
            else if (MinHeap.find(target) != MinHeap.end())
            {
                MinHeap.erase(target);
                MinHeap.insert(*MidHeap.rbegin());
                Sum -= (*MidHeap.rbegin()).first;
                MidHeap.erase(*MidHeap.rbegin());
            }
            // if target is in MidHeap then remove it             
            else
            {
                Sum -= target.first;
                MidHeap.erase(MidHeap.find(target));
            }
        }

        // insert current element in to MaxHeap 
        MaxHeap.insert({ num,count });
        
        // if MaxHeap size > K then insert max element in to MinHeap
        if (MaxHeap.size() > K)
        {
            auto maxVal = *MaxHeap.begin();
            MaxHeap.erase(MaxHeap.begin());

            MinHeap.insert(maxVal);

            // if MinHeap size > K then insert min element in to MidHeap            
            if (MinHeap.size() > K)
            {
                auto minVal = *MinHeap.begin();
                MinHeap.erase(MinHeap.begin());

                // update running sum
                MidHeap.insert(minVal);
                Sum += minVal.first;
            }
        }

    }

    int calculateMKAverage() {

        // return -1 for less than M elements and otherwise return running sum / range
        if (count < M) return -1;
        else return Sum / midLength;
    }        
          
          
int main(){
          
          
          
return 0;
}