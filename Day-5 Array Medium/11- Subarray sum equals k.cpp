// https://leetcode.com/problems/subarray-sum-equals-k/description/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0;

        unordered_map<int,int> mp;
        int pre_sum=0;

        mp[0] = 1;


        // s = k + (s-k)
        //just find (s-k)

        for(auto x : nums){

            pre_sum = pre_sum + x;

            int required = pre_sum - k;

            cnt = cnt + mp[required];

            mp[pre_sum]++;

        }

        return cnt;

    }
};
