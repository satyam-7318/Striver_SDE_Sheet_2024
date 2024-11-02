// https://leetcode.com/problems/binary-search/description/

class Solution {
public:

    int solve(vector<int>& nums, int low, int high, int target){

        if(low > high)
            return -1;

        int mid = low + (high - low) / 2;

        if(nums[mid] == target)
            return mid;

        if(nums[mid] < target)
            return solve(nums, mid + 1, high, target);
        else
            return solve(nums, low, mid - 1, target);




    }

    int search(vector<int>& nums, int target) {

        // int n = nums.size();

        // int low = 0;
        // int high = n - 1;

        // while(low <= high){

        //     int mid = low + (high - low)/2;

        //     if(nums[mid] == target){
        //         return mid;
        //     }
        //     else if(nums[mid] < target){
        //         low = mid + 1;
        //     }
        //     else{
        //         high = mid - 1;
        //     }

        // }

        // return -1;

        int low = 0;
        int high = nums.size() - 1;

        return solve(nums, low , high, target);
        
    }
};
