#include <iostream>
using namespace std;

int main() 
{
    int n,i,j;
    cin>>n;
    int arr[10][10];
    
    for( i=0;i<n;i++)
    {
        for( j=0;j<n;j++)
        {
        cin>>arr[i][j];
        }
    }
    
     for( i=0;i<n;i++)
    {
        for( j=0;j<n;j++)
        {
            if((i+j)%2==0)
            {
            cout<<0<<" ";
            }
            else
            {
            cout<<1<<" ";
            }
        }
        cout<<endl;
    }
    
	
}
