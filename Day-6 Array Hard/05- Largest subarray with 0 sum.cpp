// https://www.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1?category%5B%5D=Hash&company%5B%5D=Amazon&page=1&query=category%5B%5DHashcompany%5B%5DAmazonpage1company%5B%5DAmazoncategory%5B%5DHash&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-subarray-with-0-sum

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        
        unordered_map<int,int> mp;
        mp[0] = -1;
        vector<int> preSum(n,0);
        preSum[0] = arr[0];
        mp[preSum[0]] = 0;
        int maxi = 0;
        
        if(n==1 and arr[0]==0){
            return 1;
        }
        
        for(int i=1;i<n;i++){
            
            preSum[i] = preSum[i-1] + arr[i];
            
            if(mp.find(preSum[i]) != mp.end()){
                maxi = max(maxi, i - mp[preSum[i]]);
            }
            else
                mp[preSum[i]] = i;
        }
        
        return maxi;
        // Your code here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i) {
            cin >> array1[i];
        }
        Solution ob;
        cout << ob.maxLen(array1, m) << endl;
    }
    return 0;
}

// } Driver Code Ends
