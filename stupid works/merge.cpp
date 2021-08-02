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
using namespace std;
          
priority_queue<int , vector<int>, greater<int>> v;          
          
          
int main(){
          int arr1[]={1,5,6,9};
          int arr2[]={3,7,0};
          int arr3[]={10,4,2,21};
          
          vector<int> v1;
            for(int i=0;i<4;i++){
                v1.push_back(arr1[i]);
            }
             for(int i=0;i<3;i++){
                v1.push_back(arr2[i]);
            }
             for(int i=0;i<4;i++){
                v1.push_back(arr3[i]);
            }

            //make_heap(v1.begin(),v1.end());
            sort_heap(v1.begin(),v1.end());
            for(int i=0;i<v1.size();i++){
                v.push(v1[i]);
            }
            for(int i=0;i<v1.size();i++){
                cout<<v.top()<<" ";
                v.pop();
            }
return 0;
}