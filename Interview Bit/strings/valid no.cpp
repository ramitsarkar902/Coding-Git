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
          
int  isNumber(const string str) {
    int i = 0, j = str.length() - 1;
  
    // Handling whitespaces
    while (i < str.length() && str[i] == ' ')
        i++;
    while (j >= 0 && str[j] == ' ')
        j--;
  
    if (i > j)
        return 0;
  
    // if string is of length 1 and the only
    // character is not a digit
    if (i == j && !(str[i] >= '0' && str[i] <= '9'))
        return 0;
  
    // If the 1st char is not '+', '-', '.' or digit
    if (str[i] != '.' && str[i] != '+'
        && str[i] != '-' && !(str[i] >= '0' && str[i] <= '9'))
        return 0;
  
    // To check if a '.' or 'e' is found in given
    // string. We use this flag to make sure that
    // either of them appear only once.
    bool flagDotOrE = false;
  
    for (i; i <= j; i++) {
        // If any of the char does not belong to
        // {digit, +, -, ., e}
        if (str[i] != 'e' && str[i] != '.'
            && str[i] != '+' && str[i] != '-'
            && !(str[i] >= '0' && str[i] <= '9'))
            return 0;
  
        if (str[i] == '.') {
            // checks if the char 'e' has already
            // occurred before '.' If yes, return 0.
            if (flagDotOrE == true)
                return 0;
  
            // If '.' is the last character.
            if (i + 1 > str.length())
                return 0;
  
            // if '.' is not followed by a digit.
            if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
                return 0;
        }
  
        else if (str[i] == 'e') {
            // set flagDotOrE = 1 when e is encountered.
            flagDotOrE = true;
  
            // if there is no digit before 'e'.
            if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
                return 0;
  
            // If 'e' is the last Character
            if (i + 1 > str.length())
                return 0;
  
            // if e is not followed either by
            // '+', '-' or a digit
            if (str[i + 1] != '+' && str[i + 1] != '-'
                && (str[i + 1] >= '0' && str[i] <= '9'))
                return 0;
        }
    }
  
    /* If the string skips all above cases, then 
    it is numeric*/
    return 1;
}
         
          
          
int main(){
          
          
          
return 0;
}