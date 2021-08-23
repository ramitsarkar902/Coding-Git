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
          
          
/* Given a matrix of ‘O’ and ‘X’, replace ‘O’ with ‘X’ if surrounded by ‘X’   */     

void change(vector<vector<char>> &arr,int x,int y){
    arr[x][y]='*';
    int dx[]={0,0,-1,1};
    int dy[]={1,-1,0,0};
    f(i,0,4){
        int cx=x+dx[i];
        int cy=y+dy[i];
        if(cx>=0 and cx<arr.size() and cy>=0 and cy<arr.size() and arr[cx][cy]=='O'){
            change(arr,cx,cy);
        }
    }
}
          
int main(){
          int n,m;cin>>n>>m;
          vector<vector<char>>arr(n,vector<char>(m));
        f(i,0,n){
            f(j,0,m){
                cin>>arr[i][j];
            }
        }

     f(i,0,n){
            f(j,0,m){
                if(i==0 or i==n-1 or j==0 or j==n-1){
                    if(arr[i][j]=='O')
                    change(arr,i,j);
                }
            }
     }


      f(i,0,n){
            f(j,0,m){
                if(arr[i][j]=='O')
                arr[i][j]='X';
            }
      }
       f(i,0,n){
            f(j,0,m){
                if(arr[i][j]=='*') arr[i][j]='O';
            }
       }

     f(i,0,n){
            f(j,0,m){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
     }

          
          
return 0;
}