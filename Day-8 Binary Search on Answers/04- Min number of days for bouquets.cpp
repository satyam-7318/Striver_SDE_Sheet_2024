// https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/


class Solution {
public:

    bool isPossible(vector<int>& num, int m, int k, int mid){

        int cnt = 0;
        int numOfBouquets = 0;

        for(int i = 0; i < num.size(); i++){
            if(num[i] <= mid){
                cnt++;
            }
            else{
                numOfBouquets += (cnt/k);
                cnt = 0;
            }
        }

        numOfBouquets += (cnt/k);
        cout<<"numOfBouquets "<<numOfBouquets<<endl;
        return numOfBouquets >= m;


    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int low = 1;
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = -1;

        while(low <= high){

            int mid = low + (high - low) / 2;

            if(isPossible(bloomDay, m, k, mid)){
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;

        }

        return ans;
    }
};
