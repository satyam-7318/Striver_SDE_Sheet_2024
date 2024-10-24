// https://leetcode.com/problems/reverse-pairs/description/


class Solution {
public:

    void merge(vector<int>& nums, int low, int mid, int high, int& cnt){

        int j = mid + 1;
        vector<int> temp;

        for (int i = low; i <= mid; i++) {
            while (j <= high && nums[i] > 2LL*nums[j]){
                j++;
            }
            cnt += (j - (mid + 1));
        }

        int left = low;
        int right = mid + 1;

        while(left <= mid && right <= high){

            if(nums[left]<=nums[right]){
                temp.push_back(nums[left++]);
            }
            else
                temp.push_back(nums[right++]);
        }

        while(left <= mid) temp.push_back(nums[left++]);

        while(right <= high) temp.push_back(nums[right++]);

        for(int i=low;i<=high;i++){
            nums[i] = temp[i-low];
        }

    }

    void mergeSort(vector<int>& nums, int low, int high, int& cnt){

        if(low>=high) return;

        int mid = low + (high - low)/2;

        mergeSort(nums,low,mid,cnt);
        mergeSort(nums,mid+1,high,cnt);

        merge(nums, low, mid, high, cnt);

    }

    int reversePairs(vector<int>& nums) {

        int low = 0;
        int high = nums.size() - 1;
        int cnt = 0;

        mergeSort(nums,low,high,cnt);

        return cnt;
        
    }
};
