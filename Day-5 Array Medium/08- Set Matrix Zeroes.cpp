// https://leetcode.com/problems/set-matrix-zeroes/description/

//TC - O(m*n)
//SC - O(n)+O(m)

class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {

        int m = mat.size();
        int n = mat[0].size();

        vector<int> row(n, -1);
        vector<int> col(m, -1);

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){

                if(mat[i][j]==0){
                    row[j]=0;
                    col[i]=0;
                }

            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){

                if(row[j]==0 || col[i]==0)
                    mat[i][j]=0;

            }
        }
        
        
    }
};
