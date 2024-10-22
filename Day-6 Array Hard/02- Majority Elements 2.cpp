// https://leetcode.com/problems/majority-element-ii/description/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int k = floor(n/3);

        vector<int> ans;

        // unordered_map<int, int> mp;

        // for(auto z : nums){
        //     mp[z]++;
        // }


        // for(auto it : mp){
        //     if(it.second > k){
        //         ans.push_back(it.first);
        //     }
        // }

        int x=INT_MIN, y=INT_MIN;
        int cnt1=0, cnt2=0;

        for(int i=0;i<n;i=i+1){

            if(cnt1 == 0 && nums[i] != y){
                x = nums[i];
                cnt1= 1;
            }
            else if(cnt2 == 0 && nums[i] != x){
                y = nums[i];
                cnt2 = 1;
            }
            else if(x == nums[i]){
                cnt1++;
            }
            else if(y == nums[i]){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }

        }

        cnt1=0, cnt2=0;

        for(auto z : nums){
            
            if(z==x){
                cnt1++;
            }

            if(z==y){
                cnt2++;
            }
        }

        if(cnt1 > k) ans.push_back(x);

        if(cnt2 > k) ans.push_back(y);
        

        return ans;

    }
};
