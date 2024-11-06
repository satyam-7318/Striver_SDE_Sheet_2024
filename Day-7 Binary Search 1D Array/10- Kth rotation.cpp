// https://www.geeksforgeeks.org/problems/rotation4723/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=rotation


class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        
        // Find min element in rotated sorted array
        // Index of minimum element will be rotation value
        
        int low = 0;
        int high = arr.size() - 1;
        
        int index = -1;
        int ans = INT_MAX;
        
        while(low <= high){
            
            int mid = low + (high - low) / 2;
            
            if(arr[mid] >= arr[low]){
                
                if(ans > arr[low]){
                    ans = arr[low];
                    index = low;
                }
                
                low = mid + 1;
            }
            else if(arr[mid] <= arr[high]){
                
                if(ans > arr[mid]){
                    ans = arr[mid];
                    index = mid;
                }
                
                high = mid - 1;
            }
            
        }
        
        return index;
    }
};
