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
#include<unordered_map>

#define ll long long
#define mod 1000000007 //10^9+7
              
#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
#define f(i,a,b) for(int i=a;i<b;i++)
#define fm(i,a,b) for(int i=a;i>b;i--)
#define pii pair<int, int>
#define v(x) vector<x>
#define sortv(vec) sort(vec.begin(), vec.end())
#define pqmax priority_queue<int, vi>
#define pqmin priority_queue <int, vector<int>, greater<int>>
#define ff first
#define ss second
using namespace std;
          
          
          
          
          
          
//for linked list          
struct Node
{
int data;
struct Node *next;
 Node(int x)
{
data = x;
 next = NULL;
 }
};
          
          
          
void reverse(string & s){
	    int n=s.length(),i;

	    for(i=0;i<n/2;i++){
	        swap(s[i],s[n-1-i]);
	    }
	}


	string stoint(int first){

	    string s;

	    if(first==0)
	        s.push_back('0');
	    else{
	        while(first>0){
	            s.push_back(  first%10 + '0');
	            first/=10;
	        }
	        reverse(s);
	    }
	    return s;
	}
	string fractionToDecimal(int numerator, int denominator) {
	    // Code here
	      string S;
	    map<int, int > mp;
	    int first=numerator/denominator;
	    int rem=numerator%denominator, prev;
	    S+=stoint(first);

	    if(rem==0)
	        return S;

	    S.push_back('.');

	    mp.clear();
	    while(rem!=0){

	        if( mp.find(rem)!=mp.end() ){

	            S.insert(mp[rem],"(");

	                S.push_back(')');
	                return S;
	        }
	        else{
	            pair<int,int> pp;
	            pp=make_pair(rem,S.length());
	            mp.insert(pp);
	            int xyz = (rem*10) / denominator;
	            S+=stoint(xyz);
	            rem=(rem*10)%denominator;
	        }
	    }
	    return S;
	}          
          
          
          
          
          
          
          
          
int main(){
          
          
          
return 0;
}