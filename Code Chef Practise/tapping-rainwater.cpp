#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    vector<int> v={0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> r;
    vector<int>l;
    int m=0;int n=0;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[j]>v[i]){m=max(m,v[j]);}
        }
    r[i]=m;
    }
    for(int i=1;i<v.size();i++){
        for(int j=i-1;j<v.size();j--){
            if(v[j]<v[i]){n=min(n,v[j]);}
        }
        l[i]=n;
    }
    for(int i=1;i<v.size();i++){
        cout<<r[i]<<" ";
    }
    return 0;
}