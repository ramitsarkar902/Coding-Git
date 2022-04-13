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
#include <unordered_map>

#define ll long long
#define mod 1000000007 // 10^9+7

#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
#define f(i, a, b) for (int i = a; i < b; i++)
#define fm(i, a, b) for (int i = a; i > b; i--)
#define pii pair<int, int>
#define v(x) vector<x>
#define sortv(vec) sort(vec.begin(), vec.end())
#define pqmax priority_queue<int>
#define pqmin priority_queue<int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;

// for linked list
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

long long minimumDifference(vector<int> &nums)
{
    int n = nums.size() / 3, sum = 0, i = 0, res = INT_MAX;
    int N = nums.size();
    priority_queue<ll> maxHeap;
    priority_queue<ll, v(ll), greater<ll>> minHeap;
    vector<int> sumLeft, sumRight;
    for (i = 0; i < n; i++)
    {
        maxHeap.push(nums[i]);
        sum += nums[i];
    }
    sumLeft.push_back(sum);
    for (i = n; i < 2 * n; i++)
    {
        sum -= maxHeap.top();
        maxHeap.pop();
        maxHeap.push(nums[i]);
        sum += nums[i];
        sumLeft.push_back(sum);
    }
    sum = 0;
    i = 3 * n - 1;
    for (; i >= 2 * n; i--)
    {
        sum += nums[i];
        minHeap.push(nums[i]);
    }
    sumRight.push_back(sum);
    for (i = 2 * n - 1; i >= n; i--)
    {
        sum -= minHeap.top();
        minHeap.pop();
        minHeap.push(nums[i]);
        sum += nums[i];
        sumRight.push_back(sum);
    }
    reverse(sumRight.begin(), sumRight.end());
    for (int i = 0; i < sumLeft.size(); i++)
        res = min(res, sumLeft[i] - sumRight[i]);
    return res;
     //another solution which got accepted

   /*  long long n=nums.size();
        long long N=n/3;
        vector<long long>prefix(n,1e17),suffix(n,1e17);
        priority_queue<long long>pq_max;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            pq_max.push(nums[i]);
            if(pq_max.size()>N)
            {
                sum-=pq_max.top();
                pq_max.pop();
            }
            if(pq_max.size()==N)
            {
                prefix[i]=sum;
            }
        }
        priority_queue<long long,vector<long long>,greater<long long>>pq_min;
        sum=0;
        for(int i=n-1;~i;i--)
        {
            sum+=nums[i];
            pq_min.push(nums[i]);
            if(pq_min.size()>N)
            {
                sum-=pq_min.top();
                pq_min.pop();
            }
            if(pq_min.size()==N)
            {
                suffix[i]=sum;
            }
        }
        long long ans=1e17;
        for(int i=0;i<n-1;i++)
        {
            if(prefix[i]!=1e17&&suffix[i+1]!=1e17)
            {
                ans=min(ans,prefix[i]-suffix[i+1]);
            }
        }
        return ans; */
}

int main()
{

    return 0;
}