#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int r,c,e;
        cin>>r>>c>>e;
        int a[r+1][c+1];
        int b[r+1][c+1];
        for(int i=0;i<=r;i++){
            for(int j=0;j<=c;j++){
                if(i==0 ||j==0){
                    a[i][j]==0;
                }
                else
                cin>>a[i][j];
            }
        }
        for(int i=0;i<=r;i++){
            for(int j=0;j<=c;j++){
                cout<<a[i][j];
            }
        }
    }
    
}