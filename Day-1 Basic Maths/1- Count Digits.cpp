/*

Given a number n. Count the number of digits in n which evenly divide n. Return an integer, total number of digits of n which divides n evenly.

Note :- Evenly divides means whether n is divisible by a digit i.e. leaves a remainder 0 when divided.
 

Examples :

Input: n = 12
Output: 2
Explanation: 1, 2 when both divide 12 leaves remainder 0.

Input: n = 2446
Output: 1
Explanation: Here among 2, 4, 6 only 2 divides 2446 evenly while 4 and 6 do not.

Input: n = 23
Output: 0
Explanation: 2 and 3, none of them divide 23 evenly.

Expected Time Complexity: O(n)
Expected Space Complexity: O(1)
 
Constraints:
1<= n <=10^5

*/




//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution{
public:

    bool isDivide(int N, int x){
        
        return N % x == 0;
        
    }
    
    int evenlyDivides(int N){
        //code here
        
        int cnt = 0;
        int num = N;
        
        while(N){
            
            
            int x = N % 10;
            
            if(x && isDivide(num, x))
                cnt++;
                
            N = N / 10;
            
            
        }
        
        return cnt;
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
