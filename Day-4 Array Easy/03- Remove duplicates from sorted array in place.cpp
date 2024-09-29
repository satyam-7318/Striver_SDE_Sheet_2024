//           https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int ind = 0;
        int cnt = 1;

        for(int i=1;i<n;i++){
            if(nums[i]!=nums[ind]){
                nums[ind+1]=nums[i];
                ind = ind+1;
                cnt++;
            }
        }

        return cnt;

    }
};
