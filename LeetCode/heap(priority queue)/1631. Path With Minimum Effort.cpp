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

bool isValid(int x, int y, int m, int n)
{
    return x >= 0 && x < m && y >= 0 && y < n;
}

struct cell
{
    int x, y, effort;

    bool operator<(const cell &other) const
    { // priority is given according to effort
        return this->effort > other.effort;
    }
};

int minimumEffortPath(vector<vector<int>> &heights)
{
    int m = heights.size(), n = heights[0].size();
    vector<vector<int>> min_effort(m, vector<int>(n, INT_MAX)); 
    vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}}; 

      min_effort[0][0] = 0;       //when starting with (0, 0)
        priority_queue<cell> pq;    //declaring a priority queue for cell
        pq.push({0, 0, 0});         //pushing for the (0, 0) with weight=0
        
        while (!pq.empty()) {
            cell curr = pq.top();   
            pq.pop();

            for (auto [dx,dy] : directions) {      //trying out all directions
                int neighx = curr.x + dx;
                int neighy = curr.y + dy;
                if (!isValid(neighx, neighy, m, n))     
                    continue;
                
                
                int effort_from_curr = max(curr.effort, abs(heights[curr.x][curr.y] - heights[neighx][neighy]));   
                if (effort_from_curr < min_effort[neighx][neighy]) {//if this path has lesser efforts 
                    min_effort[neighx][neighy] = effort_from_curr;  //updating min effort
                    pq.push({neighx, neighy, effort_from_curr});    //push it into queue to be processed
                }
            }
        }
        return min_effort[m-1][n-1];
}

int main()
{

    return 0;
}