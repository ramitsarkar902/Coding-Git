#include<iostream>
using namespace std;



int main(){
	int k,d,i;
    int j=0;
cin>>d;
cin>>k;
int p[50];
bool ip=true;
int low=0;int high=k;

while(low<high){
ip=true;
if(low==0 || low==1)
ip=false;

else{
for(i=2;i<=low/2;++i){
if(low%i==0){
ip=false;
break;
}
}
}
if(ip){
p[j]=low;
j++;
}

++low;
}

for(int i=0;i<k;i++){
    cout<<p[i];
}
return 0;

}
