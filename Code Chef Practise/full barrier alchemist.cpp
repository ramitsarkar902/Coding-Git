#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,h,y1,y2,l,sum=0;
        cin>>n>>h>>y1>>y2>>l;
        int k[n],x[n];
        for(int i=0;i<n;i++){
            cin>>k[i]>>x[i];
        }
        for(int i=0;i<n;i++){
            if(k[i] == 1){
                if(h-y1<=x[i])
                sum++;
                else{
                    l--;
                    sum++;
                }
            }
            else{
                if(y2>=x[i])
                sum++;
                else{
                    l--;
                    sum++;
                }
            }
            if(l==0){
                sum--;
                break;
            }
        }
        cout<<sum<<endl;
    }
	// your code goes here
	return 0;
}
