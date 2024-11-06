// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/


class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int low = 0;
        int high = nums.size() - 1;

        int ans = INT_MAX;

        while(low <= high){

            int mid = low + (high - low) / 2;

            // Find sorted half first
            // Our min number might be in sorted part or might be not

            if(nums[mid] >= nums[low]){
                ans = min(ans, nums[low]);
                low = mid + 1;
            }
            else if(nums[mid] <= nums[high]){
                ans = min(ans, nums[mid]);
                high = mid - 1;
            }

        }

        return ans;
    }
};
