
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int>v;
    int n,x;
    cin>>n;
    int size=v.size();
    for(int i=0;i<size;i++){
        cin>>x;
        v.push_back(x);
        
    }
    
    sort(v.begin(), v.end()); 
  
    
    for(int i=0;i<size;i++){
        cout<<v.at(i);
    }
    return 0;
}
