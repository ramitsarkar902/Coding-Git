#include <iostream>
using namespace std;

int main() {
	
	int N;
	int K;
	int D;
	cin>>N>>K>>D;
	int A[5];
	int res;
	for(int i=0;i<N;i++){
	    cin>>A[i];
	    res+=A[i];
	}
	int check=res/K;
	if(res/K<=0)
	cout<<0;
	
	if(check>0 && check<=D)
	cout<<check;
	
	if(check>0 && check>D)
	cout<<check-D;
	
	return 0;
}
