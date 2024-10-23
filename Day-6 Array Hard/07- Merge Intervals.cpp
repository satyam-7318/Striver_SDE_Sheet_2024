// https://leetcode.com/problems/merge-intervals/description/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        
        sort(inter.begin(),inter.end());
        
        int n = inter.size();
        
        vector<vector<int>> ans;

        // for(int i=0;i<n;i++){

        //     int first = inter[i][0];
        //     int second = inter[i][1];

        //     while(i+1 < n && inter[i+1][0] <= second){
        //         if(inter[i+1][1] >= second)
        //             second = inter[i+1][1];
        //         i++;
        //     }

        //     ans.push_back({first,second});

        // }

        vector<int> temp = inter[0];

        for(int i=0;i<n;i++){

            if(temp[1] >= inter[i][0]){
                temp[1] = max(temp[1], inter[i][1]);
            }
            else{
                ans.push_back(temp);
                temp = inter[i];
            }

        }

        ans.push_back(temp);

        return ans;
        
    }
};
