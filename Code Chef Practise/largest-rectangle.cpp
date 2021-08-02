
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){
    vector<int> v={2,1,5,6,2,3};
    int i=0;int j=0; int temp=0;int area=0;int c=1;int a=0;
   for(i=0;i<v.size();i++){
       j=i+1;
       temp=i;
        while(v[j]<v[temp]){
            area=v[temp]*c;
            a=max(a,area);
            c++;
            temp--;
        }
        c=1;
   }
   cout<<area;

   return 0;
}