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
#define f(i, a, b) for (int i = a; i < b; i++)
#define fm(i, a, b) for (int i = a; i > b; i--)
#define pii pair<int, int>
#define v(x) vector<x>
#define sortv(vec) sort(vec.begin(), vec.end())
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue<int, vector<int>, greater<int>>
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

void combinationSumUtil(vector<int> &A, int sum,
                        vector<vector<int>> &result, vector<int> current, int pos)
{
    //pushing the combination in result if the sum becomes equal to 0.
    if (sum == 0)
    {
        result.push_back(current);
        return;
    }
    //returning if conditions are out of bound.
    if (sum < 0 || pos >= A.size())
        return;

    //pushing to current for possible answer.
    current.push_back(A[pos]);

    //calling function recursively for further inclusions.
    combinationSumUtil(A, sum - A[pos], result, current, pos);

    //backtracking to remove already present number in combination
    //and provide space for further additions and possible answers.
    current.pop_back();

    //calling function recursively to move to next index as all possible
    //combination for current index have been done.
    combinationSumUtil(A, sum, result, current, pos + 1);
}

//Function to return a list of indexes denoting the required
//combinations whose sum is equal to given number.
vector<vector<int>> combinationSum(vector<int> &A, int B)
{

    sort(A.begin(), A.end());
    vector<vector<int>> result;
    vector<int> current, C;
    int i, j;

    //storing only distinct elements in list C.
    for (i = 0; i < A.size(); i++)
    {
        j = i + 1;
        while (j < A.size() && A[i] == A[j])
        {
            j++;
        }
        C.push_back(A[i]);
        i = j - 1;
    }
    combinationSumUtil(C, B, result, current, 0);

    //returning the result.
    return result;
}

int main()
{

    return 0;
}