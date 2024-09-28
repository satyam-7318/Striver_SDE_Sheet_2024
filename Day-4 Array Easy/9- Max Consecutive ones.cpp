//  https://leetcode.com/problems/max-consecutive-ones/description/


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int maxCnt = INT_MIN;
        int i = 0;
        int n = nums.size();
        
        while(i<n){    
            if(nums[i++]==1)
                cnt++;
            else{
                maxCnt = max(maxCnt , cnt);
                cnt=0;
            }
        }
        
        maxCnt = max(maxCnt,cnt);
        return maxCnt;
    }
};
