// https://leetcode.com/problems/rotate-image/description/

class Solution {
public:
    // Rotate = transpose + reverse of each row

    void rotate(vector<vector<int>>& mat) {

        int n = mat.size();

        // Transpose

        for(int i=0;i<n;i++){
            
            for(int j=i+1;j<n;j++){

                swap(mat[i][j], mat[j][i]);
            
            }

            // Reverse of each row

            reverse(mat[i].begin(),mat[i].end());
        }

    }
};
