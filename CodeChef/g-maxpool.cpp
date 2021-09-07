
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t,n;
    cin>>t;
     vector<vector<int> > vec;
     int arr[10];
    while(t--){
        cin>>n;
        int x;
        int i=0;
        for(i=0;i<n;i++){
             vector<int> v1;
  
        for (int j = 0; j < n; j++) {
            cin>>x;
            v1.push_back(x);
        }
        vec.push_back(v1);
        }
         for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }

    int max=0;int c=0;
    for(i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            int temp=vec[i][j];
            if(temp>max){
                max=temp;
                }
        }
         for(int j=1;j<n;j++){
            int temp=vec[i][j];
            if(temp>max){
                max=temp;
                }
        }
        cout<<max<<" ";
        
    }

    
    }
    for(int i=0;i<10;i++){
        cout<<arr[i];
    }
    return 0;
}