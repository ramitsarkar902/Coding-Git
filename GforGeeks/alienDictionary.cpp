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
          
/* Given a sorted dictionary of an alien language having N words and k starting alphabets of standard dictionary. Find the order of characters in the alien language.
Note: Many orders may be possible for a particular test case, thus you may return any valid order and output will be 1 if the order of string returned by the function is correct else 0 denoting incorrect string returned.
 

Example 1:

Input: 
N = 5, K = 4
dict = {"baa","abcd","abca","cab","cad"}
Output:
1
Explanation:
Here order of characters is 
'b', 'd', 'a', 'c' Note that words are sorted 
and in the given language "baa" comes before 
"abcd", therefore 'b' is before 'a' in output.
Similarly we can find other orders.    */      

//Approach-->
/* how bdac is solution for --
baa abcd abca cab cad. It is so - IMPLIES Series till now
1) abcd is before abca => d is before a : d a
2) cab is before cad => b is before d : b d a
3) baa is before abca => a is before c : b d a c

So, look for the first mismatch..create an edge from mismatching character..Topological Sort. */
void DFS(vector<int>adj[],int x,stack<int> &s,vector<bool> &isVisited){
    isVisited[x]==true;
    for(auto i:adj[x]){
        if(isVisited[i]==false) DFS(adj,i,s,isVisited);
    }
    s.push(x);
}


string topologicalSort(vector<int>adj[],int n){
    stack<int>s;
    vector<bool> isVisited(n,false);
    for(int i=0;i<n;i++){
        if(adj[i].size()){
            for(auto x:adj[i]){
                if(isVisited[x]==false) DFS(adj,x,s,isVisited);
            }
        }
    }
    string ans;
    while(s.empty() == false)
    {
        ans += s.top() + 'a';;
        
        s.pop();
    }
    
    return ans;
}     

string findOrder(string words[],int n,int k){
    vector<int>adj[k];
    for(int i=0;i<n-1;i++){
        string w1=words[i];
        string w2=words[i+1];
        for(int j=0;j<min(w1.size(),w2.size());j++){
             int index1 = w1[j] - 'a';
                int index2 = w2[j] - 'a';
                
                adj[index1].push_back(index2);
                
                break;
        }
    }
    return topologicalSort(adj, k);

}         
int main(){
          
          
          
return 0;
}