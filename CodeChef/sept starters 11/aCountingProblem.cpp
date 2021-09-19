#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <deque>

#include <list>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <string.h>
#include <algorithm> 
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	int mod=1000000007;
	while(t--){
	    int n,x;
	    int temp=-1;
	    cin>>n;
	    for(int i=0;i<n-1;i++){
	        cin>>x;
	        temp=max(temp,x);
	    }
	    long long v=pow(10,5);
	    long long ans=((v-temp)+(v-temp+1))%mod;
	    cout<<ans<<endl;
	    
	}
	return 0;
}
