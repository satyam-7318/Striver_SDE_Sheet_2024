// https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while(low <= high){

            // Remove duplicates first from both ends

            // low end
            while(low < high && nums[low] == nums[low+1]){
                low++;
            }

            //high end
            while(low < high && nums[high] == nums[high-1]){
                high--;
            }

            int mid = low + (high - low) / 2;

            if(nums[mid] == target){
                return true;
            }

            // Find sorted part first

            if(nums[mid] >= nums[low]){
                //left part is sorted
                if(target >= nums[low] && target < nums[mid]){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
            else{
                //right part is sorted
                if(target > nums[mid] && target <= nums[high]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }

        }

        return false;
    }
};
