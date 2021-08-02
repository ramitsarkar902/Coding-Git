#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n;
	    cin>>n;
	    long long int sum=0;
	    for(int j=0;j<n;j++)
	    {
	        int x;
	        cin>>x;
	        sum=sum+x;
	    }
	    if(sum%2==0)
	    {
	        cout<<"1"<<endl;
	    }
	    else
	    {
	        cout<<"2"<<endl;
	    }
	}
	return 0;
}