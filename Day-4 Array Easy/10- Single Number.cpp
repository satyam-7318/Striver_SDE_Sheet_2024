//      https://leetcode.com/problems/single-number/description/



class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0;

        for(int i : nums){
            x = x ^ i;
        }

        return x;
    }
};
