// https://leetcode.com/problems/single-element-in-a-sorted-array/description/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();

        if(n == 1){
            return nums[0];
        }

        if(nums[0] != nums[1]){
            return nums[0];
        }

        if(nums[n-1] != nums[n-2]){
            return nums[n-1];
        }

        // Taking low and high 1 and n - 2 so that we don't need to write so many edge cases

        int low = 1;
        int high = n - 2;

        while(low <= high){

            int mid = low + (high - low) / 2;

            if(nums[mid-1] != nums[mid] && nums[mid+1] != nums[mid])
                return nums[mid];

            if(mid & 1){
                // mid is odd
                if(nums[mid+1] == nums[mid]){
                    high = mid - 1;
                }
                else if(nums[mid-1] == nums[mid]){
                    low = mid + 1;
                }
            }
            else{
                // mid is even
                if(nums[mid+1] == nums[mid]){
                    low = mid + 1;
                }
                else if(nums[mid-1] == nums[mid]){
                    high = mid - 1;
                }
            }
        }

        return -1;
         
    }
};
