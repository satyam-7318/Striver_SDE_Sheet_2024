// https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-missing-and-repeating

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        
        // x is repeating number and y is missing number
        
        // x - y = S - S(n)
        // x^2 - y^2 = S^2 - S(n)^2 => x + y = (S^2 - S(n)^2)/ x-y
        
        vector<int> ans;
        
        int n = arr.size();
        
        long long Sn = ((n) * (n + 1))/2;
        
        long long S2n = ((n) * (n+1) * (2*n+1))/6;
        
        long long S = 0;
        
        long long S2 = 0;
        
        for(auto x : arr){
            S += (long long) x;
            S2 += (long long) x * (long long) x;
        }
        
        
        long long  val1 = S - Sn; // x - y
        
        long long val2 = S2 - S2n;
        
        val2 = val2 / val1; // x + y
        
        long long x = (val1  + val2) / 2 ; 
        
        long long y = x - val1;
        
        ans.push_back(x);
        ans.push_back(y);
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
