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
          
int findPlatform(int arr[], int dep[], int n)
    {
        vector< pair<int,char> > order;
        
        //inserting all the values of time(arrival and departure)
        //in the vector of pairs.
        for (int i = 0; i < n; i++) {
    
            //if the time is of arrival then we keep second value
            //of pair as 'a' else 'd'.
            order.push_back(make_pair(arr[i], 'a'));
            order.push_back(make_pair(dep[i], 'd'));
        }
    
        //using custom sort vector, first according to time and if time is
        //same for two events, then arrival comes first followed by departure.
        //sort(order.begin(),order.end(),customsort);
    
        int result = 1;
        int plat_needed = 0;
        
        //using an iterator on vector of pairs.
        vector< pair<int,char> >::iterator it = order.begin();
    
        for (; it != order.end(); it++) {
            //if the second value of vector element is 'a' which stands
            //for arrival then we add 1 to platform needed else we 
            //subtract 1 from platform needed.
            if ((*it).second == 'a')
                plat_needed++;
            else
                plat_needed--;
            
            //we keep updating the value of result.
            if (plat_needed>result)
                result = plat_needed;
        }
        //returning the minimum number of platforms required.
        return result;
    }


        
          
int main(){
          int n;
          cin>>n;
          int arr[n];
          int dep[n];
          f(i,0,n){
              cin>>arr[i];
          }
          f(i,0,n){
              cin>>dep[i];
          }
        //demo to show what the vector stores
          vector<pair<int,char>> v;
          f(i,0,n){
              v.push_back(make_pair(arr[i],'a'));
              v.push_back(make_pair(dep[i],'d'));
          }
          
          vector< pair<int,char> >::iterator it = v.begin();

          for(;it!=v.end();it++){
              cout<<it->first<<" "<<it->second<<endl;
          }
return 0;
}