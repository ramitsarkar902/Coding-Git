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
#define vi vector<int>
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue <int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;
          

struct Item{
    int value;
    int weight;
};

    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        
        //sorting items on basis of value/weight ratio.
        sort(arr, arr + n, [&](Item a, Item b){
            double r1 = (double)a.value / a.weight;
        double r2 = (double)b.value / b.weight;
        return r1 > r2;
        });
        
        //taking variable for current weight in knapsack.
        int curWeight = 0;
        double finalvalue = 0.0;
        
        //iterating over all the items.
        for (int i = 0; i < n; i++)
        {
            //if currweight + item's weight is less than or equal to W,
            //then we add the item's value to final value.
            if (curWeight + arr[i].weight <= W)
            {
                curWeight += arr[i].weight;
                finalvalue += arr[i].value;
            }
            //else we take the fraction of the that item's value 
            //based on the remaining weight in knapsack.
            else
            {
                int remain = W - curWeight;
                finalvalue += arr[i].value * ((double) remain / arr[i].weight);
                break;
            }
        }
        //returning final value.
        return finalvalue;
    }          
          
          
int main(){
          
          
          
return 0;
}