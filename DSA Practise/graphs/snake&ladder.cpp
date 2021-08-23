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

//seperating snakes and ladders
          
int minThrow(int N, int arr[]){
        // code here
        map<int,int>ladders;
        map<int,int>snakes;
        for(int i=0;i<2*N;i+=2){
            if(arr[i]<arr[i+1]) ladders[arr[i]]=arr[i+1];

            if(arr[i]>arr[i+1]) snakes[arr[i]]=arr[i+1];
        }
        int moves=0;queue<int>q;
        q.push(1);
        bool found=false;
        vector<bool>vis(101,false);
        vis[1]=true;
        while(!q.size() and found){
            int sz=q.size();
           while(sz--){
               int t=q.front();
               q.pop();
               for(int die=1;die<=6;die++){
                   if(t+die ==100)found=true;

                    if(t+die<=100 and ladders[t+die] and !vis[ladders[t+die]]){
                        vis[ladders[t+die]]=true;
                        if(ladders[t+die]==100)found=true;
                    
                        q.push(ladders[t+die]);
                    }

                    else if(t+die<=100 and snakes[t+die] and !vis[snakes[t+die]]){
                        vis[snakes[t+die]]=true;
                        if(snakes[t+die]==100)found=true;

                        q.push(snakes[t+die]);
                    }
                    else if(t+die<=100 and !vis[t+die] and !snakes[t+die] and !ladders[t+die]){
                        vis[t+die]=true;
                        q.push(t+die);
                    }
               }
           }moves++;
        }
        if(found)return moves;

        return -1;
    }          
          
//using moves array till 30th cell
int minThrow(int N, int arr[]){
        // code here
         int moves[35];
        bool vis[35];
        memset(moves, -1, sizeof(moves));
        memset(vis, false, sizeof(vis));
        for(int i = 0;i < 2*N;i += 2)
            moves[arr[i]] = arr[i+1];
        
        queue<pair<int, int>> q;
        pair<int, int> p;
        q.push({1, 0});
        vis[1] = true;
        while(!q.empty()){
    		p = q.front();
    		int ii = p.first;
    		int ss = p.second;
    		if(ii == 30)
    		break;
    		q.pop();
    		for(int i = ii+1;i <= ii+6 && i <= 30;i++){
    			pair<int,int> pp;
    			if(!vis[i]){
    				pp.second = ss+1;
    				vis[i] = true;
    				if(moves[i] != -1)
    					pp.first = moves[i];
    				else
    				    pp.first = i;
    				q.push(pp);
    			}
    		}
    	}
    	return p.second;
    }
          
int main(){
          
          
          
return 0;
}