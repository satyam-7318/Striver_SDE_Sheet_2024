//     https://bit.ly/3Ap7Onp



//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> ans;
        
        int i=0,j=0;
        
        while(i<n && j<m){
            
            int s = ans.size();
            
            if(arr1[i]<arr2[j]){
                
                if(s>0 && ans[s-1]==arr1[i])
                    i++;
                else
                    ans.push_back(arr1[i++]);
            }
            else if(arr1[i]>arr2[j]){
                if(s>0 && ans[s-1]==arr2[j])
                    j++;
                else
                    ans.push_back(arr2[j++]);
            }
            else{
                if(s>0 && ans[s-1]==arr1[i]){
                    i++;
                    j++;
                }
                else{
                    ans.push_back(arr1[i++]);
                    j++;
                }
            }
        }
        
        while(i<n){
            int s = ans.size();
            
            if(s>0 && ans[s-1]==arr1[i])
                i++;
            else
                ans.push_back(arr1[i++]);
        }
            
        while(j<m){
            int s = ans.size();
            
            if(s>0 && ans[s-1]==arr2[j])
                j++;
            else
                ans.push_back(arr2[j++]);
            
        }
        
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
