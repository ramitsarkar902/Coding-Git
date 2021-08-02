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

#define ll long long

#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
using namespace std;


vector<int> contacts(vector<vector<string>> queries) {
    vector<string> v1;
    vector<string> v2;
    vector<int> results;
    for(int i=0;i<queries.size();i++){
        v1.push_back(queries[i][0]);
        v2.push_back(queries[i][1]);
    }

    for(int i=0;i<v1.size();i++){
        int c=0;
        if(v1[i]=="find"){
            for(int j=0;j<i;j++){
                if(v2[j]==v2[i]){
                    c++;
                }
            }
        }

        if(c>0){
            results.push_back(c);
        }
    }

    return results;
}