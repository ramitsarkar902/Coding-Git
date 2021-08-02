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
          
int min_sprinklers(int gallery[], int n)
    {
        vector<pair<int,int>> sprinklers;

        //storing the range of each sprinkler
        for(int i=0;i<n;i++){
            if(gallery[i]>-1)
            sprinklers.push_back(pair<int,int> (i-gallery[i],i+gallery[i]));
        }
    //sorting according to start coverage

    sort(sprinklers.begin(),sprinklers.end());

    //main comparison operations

    int i=0,target=0,c=0;

    while(target<n){
        if(i==sprinklers.size() || sprinklers[i].first>target)
        return-1;

        int max_range=sprinklers[i].second;

        while(i+1<sprinklers.size() && sprinklers[i+1].first<=target){
            i++;
            max_range=max(max_range,sprinklers[i].second);

        }
        
        if(max_range<target)
        return -1;

        c++;
        target=max_range+1;
        i++;
        
        
    }
    return c;
          
    }


int main(){
          
          
          
return 0;
}