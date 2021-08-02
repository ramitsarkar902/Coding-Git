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

void checkMagazine(vector<string> magazine, vector<string> note) {
    int c=0;
    for(int i=0;i<note.size();i++) {
        for(int j=0;j<magazine.size();j++){
            if(note[i]==magazine[j]){
                magazine[j]="";
                c++;
            }
        }
    }

    if(c== note.size()){
        cout<<"Yes";
    }
    else
    cout<<"No";
}

int main(){
    vector<string> v1={"give","me" ,"one","grand","today","night"};
    vector<string> v2={"give", "one", "grand", "today","no"};
    checkMagazine(v1,v2);




return 0;
}