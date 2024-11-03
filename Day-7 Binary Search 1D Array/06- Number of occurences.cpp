// https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number-of-occurrence

//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    int bs(vector<int>& nums, int n , int key){
        
        int low = 0;
        int high = n - 1;
        
        while(low <= high){
            
            int mid = low + (high - low) / 2;
            
            if(nums[mid] == key)
                return mid;
            else if(nums[mid] < key){
                low = mid + 1;
            }    
            else
                high = mid - 1;
            
        }
        
        return -1;
        
        
        
    }
    
    
    
    int bsf(vector<int>& nums, int low, int high , int key){
        
        int ans = -1;
        
        while(low <= high){
            
            int mid = low + (high - low) / 2;
            
            if(nums[mid] == key){
                ans = mid;
                high = mid - 1;
            }
            else if(nums[mid] < key){
                low = mid + 1;
            }    
            else
                high = mid - 1;
            
        }
        
        return ans;
    }
    
    
    int bsl(vector<int>& nums, int low, int high , int key){
        
        int ans = -1;
        
        while(low <= high){
            
            int mid = low + (high - low) / 2;
            
            if(nums[mid] == key){
                ans = mid;
                low = mid + 1;
            }
            else if(nums[mid] < key){
                low = mid + 1;
            }    
            else
                high = mid - 1;
            
        }
        
        return ans;
    }
  
    int count(vector<int>& arr, int target) {
        // code here
        int ind = bs(arr, arr.size(), target);
        
        if(ind == -1)
            return 0;
            
            
        int f = bsf(arr, 0 , ind, target);
        int l = bsl(arr, ind, arr.size()-1, target);
        
        
        return l - f + 1;
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.count(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
