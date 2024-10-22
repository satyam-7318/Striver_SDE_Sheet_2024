// https://leetcode.com/problems/3sum/description/


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;

        for(int i=0;i<n-2;i++){

            if(i==0 || i>0 && nums[i-1] != nums[i]){

                int j = i+1;
                int k = n-1;

                while(j<k){

                    if(nums[i]+nums[j]+nums[k]==0){
                        ans.push_back({nums[i],nums[j],nums[k]});

                        while(j<k && nums[j]==nums[j+1]) j++;
                        while(j<k && nums[k]==nums[k-1]) k--;
                        
                        j++;
                        k--;
                    }
                    else if(nums[i]+nums[j]+nums[k]<0){
                        j++;
                    }
                    else{
                        k--;
                    }
                }


            }
        }

        return ans;
        
    }
};
