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
          
struct Job
{
    int start, finish, profit;
};         

//find the previous non conflicting job
int latestNonConflict(Job arr[], int i)
{
    for (int j=i-1; j>=0; j--)
    {
        if (arr[j].finish <= arr[i-1].start)
            return j;
    }
    return -1;
}

//finding the profit 
//we have two options-->1.take the job if it exists or  2.exclude the job and go to next job
int findProfit(Job arr[],int n){
    if(n==1) return arr[n-1].profit;

    int includeJob=arr[n-1].profit;//take the job
    int i=latestNonConflict(arr,n);
    if(i!=-1) includeJob+=findProfit(arr,i+1); //add the job profit   

    int excludeJob=findProfit(arr,n-1);//exclude job

    return max(includeJob,excludeJob);//pass max of both conditions
}

int findMaxProfit(Job arr[],int n){
    sort(arr,arr+n,[&](Job s1,Job s2){//sorting in ascending order wrt to their end times
        return s1.finish < s2.finish;
    });

    return findProfit(arr,n);


}    
          
int main(){
          
           Job arr[] = {{3, 10, 20}, {1, 2, 50}, {6, 19, 100}, {2, 100, 200}};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "The optimal profit is " << findMaxProfit(arr, n);
    return 0;
          
return 0;
}