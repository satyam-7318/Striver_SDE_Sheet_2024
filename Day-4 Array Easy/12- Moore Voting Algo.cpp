//       https://leetcode.com/problems/majority-element/description/


class Solution {
public:
    int majorityElement(vector<int>& nums) {


        // Can do using hashmap as well

        // 2nd method - Moore Voting Algo

        int count = 0;
        int x = -1;
        
        for(int i=0;i<nums.size();i++){
            
            
            if(count==0){
                x = nums[i];
            }
            
            if(x==nums[i])
                count++;
            else
                count--;
            
        }
        
        return x;

    }
};
