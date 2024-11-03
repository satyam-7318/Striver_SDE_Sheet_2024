// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

class Solution {
public:
    
    int bs(vector<int>& nums , int key){
        
        int s = 0;
        int e = nums.size() - 1;
        
        
        while(s<=e){
            
            int mid = s + (e-s)/2;
            
            if(nums[mid] == key)
                return mid;
            
            
            if(nums[mid] < key)
                s = mid+1;
            else
                e = mid-1;
            
            
        }
        
        
        return -1;
        
        
    }
    
    
    
    int bsf(vector<int>& nums , int key , int s, int e){
        
        
        int ans  = -1;
        
        while(s<=e){
            
            
            int mid = s + (e-s)/2;
            
            if(nums[mid] == key){
                ans = mid;
                e = mid-1;
            }
            else if(nums[mid] < key)
                s = mid+1;
            else
                e = mid-1;
            
            
        }
        
        return ans;
        
        
    }
    
    int bsl(vector<int>& nums , int key , int s, int e){
        
        
        int ans  = -1;
        
        while(s<=e){
            
            
            int mid = s + (e-s)/2;
            
            if(nums[mid] == key){
                ans = mid;
                s = mid+1;
            }
            else if(nums[mid] < key)
                s = mid+1;
            else
                e = mid-1;
            
            
        }
        
        return ans;
        
        
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        
        int n = nums.size();
        
        int i = bs(nums , target);
        
        if(i==-1)
            return {-1,-1};
        
        int f = bsf(nums , target , 0 , i);
        int l = bsl(nums , target , i ,n-1);
        
        return {f,l};
        
    }
};
