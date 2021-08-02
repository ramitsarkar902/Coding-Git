#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <deque>
#include <iostream>
#include <list>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <string.h>

#define ll long long
#define mod 1000000007 //10^9+7
              
#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
using namespace std;
          
bool condition3(string a, string b, string c){
    if((a=="XXX" || a=="OOO") && (b=="XXX" || b=="OOO") || (c=="XXX" || c=="OOO")&& (a=="XXX" || a=="OOO") ||(c=="XXX" || c=="OOO")&& (b=="XXX" || b=="OOO") )
    return true;
    
    else return false;
}      
bool condition2(string a,string b,string c){
    for(int i=0;i<3;i++){
        if(a.at(i)=='_' || b.at(i)=='_' || c.at(i)=='_'){
        return true;
        break;
        }
        
    }
    return false;
}
bool condition1(string a, string b, string c){
    if((a.at(0)==b.at(0) && c.at(0)==a.at(0)) || (a.at(1)==b.at(1) && c.at(1)== a.at(1) )|| (a.at(2)==b.at(2) && c.at(2)==a.at(2)))
    return true;
    
   
     if((a.at(0)==a.at(1) && a.at(2)==a.at(0)) ||(b.at(0)==b.at(1) && b.at(2)==b.at(0)) || (c.at(0)==c.at(1) && c.at(2)==c.at(0)))
    return true;


    if((a.at(0)==b.at(1) && c.at(2)==a.at(0)) || (a.at(2)==b.at(1) && c.at(0)==a.at(2)))
    return true;

     else
    return false;

}
          
int main(){
          int t;
          cin>>t;while(t--){
              vector<vector<char>> v;
              char ar[3][3];
              string s1,s2,s3;
              cin>>s1;
              cin>>s2;
              cin>>s3;
              if(condition1(s1,s2,s3)==true){
                  if(condition3(s1,s2,s3)==true){ 
                  cout<<3<<endl;
                  }
                  
                  else cout<<1<<endl;
              }
              else{
                  if(condition2(s1,s2,s3)==true)
                  cout<<2<<endl;
                  
                  else
                cout<<3<<endl;
              }
            }
          
return 0;
}