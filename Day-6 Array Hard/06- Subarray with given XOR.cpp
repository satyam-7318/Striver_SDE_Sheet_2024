// https://www.interviewbit.com/problems/subarray-with-given-xor/

int Solution::solve(vector<int> &a, int b) {
    
   int n = a.size();
   vector<int> preXor(n,0);
   int xr = 0;
   int cnt = 0;
   
   unordered_map<int,int> mp;
   mp[xr] = 1;
   
   for(int i=0;i<n;i++){
       xr = xr ^ a[i];
       
       int req = xr ^ b;
       
       cnt += mp[req];
       
       mp[xr]++;
   }
   
   return cnt;
}
