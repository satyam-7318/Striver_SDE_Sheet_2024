/*

Given two integers a and b, write a function lcmAndGcd() to compute their LCM and GCD. The function takes two integers a and b as input and returns a list containing their LCM and GCD.

Example 1:

Input: a = 5 , b = 10
Output: 10 5
Explanation: LCM of 5 and 10 is 10, while thier GCD is 5.

Input: a = 14 , b = 8
Output: 56 2
Explanation: LCM of 14 and 8 is 56, while thier GCD is 2.

Expected Time Complexity: O(log(min(a, b))
Expected Auxiliary Space: O(1)

Constraints:
1 <= a, b <= 10^9

*/


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    long long gcd(long long A, long long B){
        
        while(A>0 & B>0){
            
            if(A > B)
                A = A % B;
            else
                B = B % A;
            
        }
        
        if(A==0) return B;
        
        return A;
    }
  
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        
        long long hcf = gcd(A,B);
        
        long long lcm = ( A * B ) / hcf;
        
        
        return {lcm, hcf};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends
