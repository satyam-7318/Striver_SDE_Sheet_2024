// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/

class Solution {
public:

    bool isPossible(vector<int>& nums, int k, int mid){

        int sum = 0;

        for(auto& x : nums){
            sum += ceil(float(x)/mid);
        }

        return sum <= k;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int ans = -1;

        while(low <= high){

            int mid = low + (high - low) / 2;

            if(isPossible(nums, threshold, mid)){
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;

        }

        return ans;
    }
};
