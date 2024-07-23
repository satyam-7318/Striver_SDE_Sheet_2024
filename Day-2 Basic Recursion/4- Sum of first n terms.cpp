// Given an integer n, calculate the sum of series 13 + 23 + 33 + 43 + … till n-th term.

// Example 1:

// Input:
// n=5
// Output:
// 225
// Explanation:
// 1^3+2^3+3^3+4^3+5^3=225

// Example 2:

// Input:
// n=7
// Output:
// 784
// Explanation:
// 1^3+2^3+3^3+4^3+5^3+6^3+7^3=784

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function sumOfSeries() which takes the integer n as a parameter and returns the sum of the cubes of the first n natural numbers.

//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
    long long fun(long long n){
        
        if(n<=0)
            return 0;
            
        return (long long)pow(n,3) + fun(n-1);
    }
  
    long long sumOfSeries(long long n) {
        // code here
        return fun(n);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
// } Driver Code Ends





// Formula [n * (n+1) / 2 ]^2
