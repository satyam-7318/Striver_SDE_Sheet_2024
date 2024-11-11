// https://www.geeksforgeeks.org/problems/find-nth-root-of-m5843/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-nth-root-of-m

class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    // Code here.
	    int low = 1;
	    int high = m;
	    
	    while(low <= high){
	        
	        int mid = low + (high - low) / 2;
	        
	        long long prod = 1;
	        int i = 1;
	        
	        while(i++ <= n){
	            prod = prod * mid;
	            if(prod > m){
	                break;
	            }
	        }
	        
	        if(prod == m){
	            return mid;
	        }
	        
	        if(prod < m){
	            low = mid + 1;
	        }
	        else
	            high = mid - 1;
	        
	    }
	    
	    return -1;
	}  
};
