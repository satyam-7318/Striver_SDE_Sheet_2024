// https://leetcode.com/problems/next-permutation/description/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        // C++ STL Method

        // next_permutation(nums.begin(), nums.end()); 

        // Method 2
        
        int breakPointIndex = -1;
        int n = nums.size();
        int justGreaterIndex = -1;

        //Find break point index from last

        for(int i=n-2;i>=0;i--){
            
            if(nums[i] < nums[i+1]){
                breakPointIndex = i;
                break;
            }
        }

        if(breakPointIndex == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        // Find number that is just greater than break point number

        for(int i=n-1;i>=breakPointIndex;i--){
            if(nums[i]>nums[breakPointIndex]){
                justGreaterIndex = i;
                break;
            }
        }

        //Swap both numbers 

        int temp = nums[justGreaterIndex];
        nums[justGreaterIndex] = nums[breakPointIndex];
        nums[breakPointIndex] = temp;

        // Reverse array after break point

        reverse(nums.begin()+breakPointIndex+1 , nums.end());
        
    }
};
