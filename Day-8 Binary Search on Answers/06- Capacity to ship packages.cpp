// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/


class Solution {
public:

    bool isPossible(vector<int>& w, int d, int m){

        int sum = 0;
        int day = 0;

        for(auto& x : w){

            if(x > m){
                return false;
            }

            if(sum + x <= m){
                sum += x;
            }
            else{
                sum = x;
                day++;
            }
        }

        if(sum <= m){
            day++;
        }

        return day <= d;

    }


    int shipWithinDays(vector<int>& weights, int days) {
        int low = 1;
        int high = accumulate(weights.begin(), weights.end(), 0);

        int ans = high;

        while(low <= high){

            int mid = low + (high - low) / 2;

            if(isPossible(weights, days, mid)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return ans;
    }
};
