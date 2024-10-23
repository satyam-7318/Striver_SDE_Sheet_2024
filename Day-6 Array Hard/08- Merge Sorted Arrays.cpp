// https://leetcode.com/problems/merge-sorted-array/description/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i=0,j=0;

        if(n==0)
            return;

        while(i<m){

            if(nums1[i] > nums2[j]){
                swap(nums1[i],nums2[j]);
                sort(nums2.begin(),nums2.end());
            }

            i++;
        }

        for(int i=m, j=0;i<m+n && j<n;i++,j++){
            nums1[i] = nums2[j];
        }
        
    }
};
