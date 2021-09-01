
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
#include <algorithm> 

#define ll long long
#define mod 1000000007 //10^9+7
              
#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
#define f(i,a,b) for(int i=a;i<b;i++)
#define fm(i,a,b) for(int i=a;i>b;i--)
#define pii pair<int, int>
#define vi vector<int>
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue <int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;
          
int solve(vector<int> &A, int B, int C) {//expert level question!!

    if(A.size() ==0) return 0;
    int temp=C,cnt=0,ans=0;
    while(temp){//count no of digits in C
    cnt++;
    temp=temp/10;
    }

    //case 1
    if(cnt<B) return 0;

    //case 2
    else if(cnt>B){
        //case 1 -->zero present then A.size()-1*B possible permutations
        if(A[0]==0){
            ans=(A.size()-1)*pow(A.size(),B-1);
        }

        //case 2 --> zero not present then A.size()^B
        else ans=pow(A.size(),B);

        if(B==1 && A[0]==0) ans++;
    }

    //case 3
    else{
        if(B==1) for(int i=0;i<A.size();i++){
            if(A[i]<C) ans++;
        }

        else{
            vector<int>temp(B);//stores the digits of C in a vector digit by digit
            for(int i=B-1;i>=0;i--){
                temp[i]=C%10;
                C=C/10;
            }

            cnt=0;
            for(int i=0;i<A.size();i++){
                if(A[i]==0)continue;

                if(A[i]>temp[0])break;

                cnt++;
            }

            ans+=(cnt)*pow(A.size(),B-1);//first element will be less or equal to temp[0] and the rest elements can b filled n any way
            //ans contains some extra values and we need to remove those which are greater than C
            int flag=false,j=0;
           for(int i=0;i<A.size();i++){if(A[i]==temp[j]){flag=true;}}
           j++;
           while(flag==true and j<=B-1){
               flag=0;
               int countx=0;
               for(int i=0;i<A.size();i++){if(A[i]>temp[j]){countx++;} if(A[i]==temp[j]){flag=1;}}
               ans-=((countx)*(pow(A.size(),B-j-1)));
           j++;
           }
           if(j==B && flag==1){ans--;}
        }

    }
    return ans;
}          
          
          
int main(){
          
          
          
return 0;
}