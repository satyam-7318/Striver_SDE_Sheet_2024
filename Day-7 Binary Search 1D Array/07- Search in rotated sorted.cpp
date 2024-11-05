// https://leetcode.com/problems/search-in-rotated-sorted-array/description/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int low = 0;
        int high = nums.size() - 1;

        while(low <= high){

            int mid = low + (high - low) / 2;

            if(nums[mid] == target){
                return mid;
            }

            //Find the sorted half part first
            if(nums[mid] >= nums[low]){
                // left half part is sorted
                if(target >= nums[low] && target < nums[mid]){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
            else{
                // right half part is sorted
                if(target > nums[mid] && target <= nums[high]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }

        }

        return -1;
    }
};
