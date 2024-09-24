/*

Given an array arr, return the second largest distinct element from an array. If the second largest element doesn't exist then return -1.

Examples:

Input: arr = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34.

Input: arr = [10, 10]
Output: -1
Explanation: The largest element of the array is 10 and the second largest element does not exist so answer is -1.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
2 ≤ arr.size() ≤ 10^5
1 ≤ arri ≤ 10^5

*/







//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        
        int n = arr.size();
        
        if(n==2 && arr[0]==arr[1])
            return -1;
            
        if(n==2)
            return arr[0]>arr[1] ? arr[1] : arr[0];
            
        
        int largest = -1;
        int secondLargest = -2;
        
        for(int i=0; i<n; i++){
            
            if(arr[i]>largest){
                secondLargest = largest;
                largest = arr[i];
            }
            
            if(arr[i]>secondLargest && arr[i]<largest){
                secondLargest = arr[i];
            }
            
        }
        
        return secondLargest;
     
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends
