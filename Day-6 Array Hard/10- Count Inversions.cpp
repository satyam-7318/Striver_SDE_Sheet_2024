// https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=inversion-of-array



#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    void merge(vector<int>& arr, int i, int mid, int j, int& cnt){
        
        
        vector<int> temp;
        int left = i;
        int right = mid+1;
        
        while(left<=mid && right<=j){
            
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                cnt += (mid - left + 1);
                temp.push_back(arr[right]);
                right++;
            }
            
        }
        
        while(left <= mid){
            temp.push_back(arr[left]);
            left++;
        }
        
        while(right <= j){
            temp.push_back(arr[right]);
            right++;
        }
        
        
        for(int k=i;k<=j;k++){
            arr[k] = temp[k - i];
        }
        
        
    }
    
    
    void mergeSort(vector<int>& arr, int i, int j , int& cnt){
        
        if(i>=j) return;
        
        int  mid = i + (j-i)/2;
        
        mergeSort(arr,i,mid, cnt);
        mergeSort(arr,mid+1,j, cnt);
        
        merge(arr,i,mid,j, cnt);
        
    }
    
    
    
    
    
    int inversionCount(vector<int> &arr) {
        // Your Code Here
        
        int high = arr.size() - 1;
        int low = 0;
        
        int cnt = 0;
        
        mergeSort(arr, low, high, cnt);
        
        return cnt;
        
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends
