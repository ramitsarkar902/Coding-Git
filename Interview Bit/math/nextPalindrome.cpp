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
          
string solve(string A) {//string input
    int size = A.size();
    int mid = (size+1)/2;

    bool incr = true;
    // check if we need to add 1 to first half of the number
    // before making it into a palindrome.
    for(int i = mid; i < size; i++) {
        if(A[size-1-i] == A[i]) continue;
        if(A[size-1-i] < A[i]) incr = true;
        if(A[size-1-i] > A[i]) incr = false;
        break;
    }

    A = A.substr(0,mid);

    //add 1 to the first half of the number.
    if(incr) {
        int carry = 1;

        for(int i = mid-1; i >= 0 && carry == 1; i--)
            A[i] = ( A[i] == '9' ? '0' : A[i] + carry--);

        if(carry) //every digit must have been '9'
            return '1' + string(size-1,'0') + '1';
    }

    //append the first half reversed to make the palindrome.
    for(int i = size-A.size()-1; i >= 0; i--)
        A.push_back(A[i]);

    return A;
}         

//integer input implementation
void printArray(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
         
    printf("\n");
}
 
// A utility function to check if num has all 9s
int AreAll9s(int* num, int n )
{
    int i;
    for(i = 0; i < n; ++i)
        if (num[i] != 9)
            return 0;
             
    return 1;
}
 
// Returns next palindrome of a given number num[].
// This function is for input type 2 and 3
void generateNextPalindromeUtil (int num[], int n )
{
     
    // Find the index of mid digit
    int mid = n / 2;
 
    // A bool variable to check if copy of left
    // side to right is sufficient or not
    bool leftsmaller = false;
 
    // End of left side is always 'mid -1'
    int i = mid - 1;
 
    // Beginning of right side depends
    // if n is odd or even
    int j = (n % 2) ? mid + 1 : mid;
 
   // Initially, ignore the middle same digits
    while (i >= 0 && num[i] == num[j])
        i--, j++;
 
    // Find if the middle digit(s) need to be
    // incremented or not (or copying left
    // side is not sufficient)
    if (i < 0 || num[i] < num[j])
        leftsmaller = true;
 
    // Copy the mirror of left to tight
    while (i >= 0)
    {
        num[j] = num[i];
        j++;
        i--;
    }
 
    // Handle the case where middle digit(s) must
    // be incremented. This part of code is for
    // CASE 1 and CASE 2.2
    if (leftsmaller == true)
    {
        int carry = 1;
        i = mid - 1;
 
        // If there are odd digits, then increment
        // the middle digit and store the carry
        if (n % 2 == 1)
        {
            num[mid] += carry;
            carry = num[mid] / 10;
            num[mid] %= 10;
            j = mid + 1;
        }
        else
            j = mid;
 
        // Add 1 to the rightmost digit of the
        // left side, propagate the carry towards
        // MSB digit and simultaneously copying
        // mirror of the left side to the right side.
        while (i >= 0)
        {
            num[i] += carry;
            carry = num[i] / 10;
            num[i] %= 10;
             
            // Copy mirror to right
            num[j++] = num[i--];
        }
    }
}
 
// The function that prints next palindrome
// of a given number num[] with n digits.
void generateNextPalindrome(int num[], int n)
{
    int i;
 
    printf("Next palindrome is:");
 
    // Input type 1: All the digits are 9, simply o/p 1
    // followed by n-1 0's followed by 1.
    if (AreAll9s(num, n))
    {
        printf("1 ");
        for(i = 1; i < n; i++)
            printf("0 ");
             
        printf("1");
    }
 
    // Input type 2 and 3
    else
    {
        generateNextPalindromeUtil(num, n);
 
        // print the result
        printArray (num, n);
    }
}
 
          
          
int main(){
          
          
          
return 0;
}