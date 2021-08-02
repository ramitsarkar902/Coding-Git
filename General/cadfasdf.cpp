#include <iostream>
#include <string>
#include <fstream>
#include <cctype>


using namespace std;


int main(){
    int t=0;
    cin>>t;
    while(t){
        int arr[7],sum=0;
        for(int i = 0; i<7 ; i++){
            cin >> arr[i];
            sum+=arr[i];
        }
        cout<<sum/7;
    t--;
    cout<<"\n";
    }
    return 0;
}
