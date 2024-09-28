//    https://leetcode.com/problems/missing-number/description/


class Solution {
public:
    int missingNumber(vector<int>& nums) {

        /* 
        long n = nums.size();

        long res = n * (n+1);
        res = res / 2;

        long sum = 0;
        for(int x : nums){
            sum += x;
        }

        return res - sum;   
        */

        int xorr = 0;
        
        
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            
            xorr = xorr^nums[i];
            
        }
        
        for(int i=0;i<=n;i++){
            
            xorr = xorr^i;
            
        }
        
        
        return xorr;
    }
};
