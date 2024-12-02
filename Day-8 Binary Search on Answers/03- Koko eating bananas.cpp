// https://leetcode.com/problems/koko-eating-bananas/description/

class Solution {
public:


    bool isPossible(vector<int>& nums, long long cnt , long long h){

        long long totalHours = 0;

        for(auto& i : nums){

            totalHours += ceil((double) i / cnt);

        }
        cout<< totalHours<< endl;
        return totalHours <= h;


    }

    int minEatingSpeed(vector<int>& piles, int h) {

        if(piles.size() == 1){
            return ceil((double)piles[0] / h);
        }
        
        long long low = 1;
        long long high = *max_element(piles.begin(), piles.end());
        long long ans = -1;

        while(low <= high){

            long long mid = low + (high - low) / 2;


            if(isPossible(piles, mid, h)){
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;

        }

        return ans;

    }
};
