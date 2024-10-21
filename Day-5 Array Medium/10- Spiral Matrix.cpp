// https://leetcode.com/problems/spiral-matrix/description/


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {

        int m = mat.size();
        int n = mat[0].size();

        int total = m * n;
        int cnt = 0;

        vector<int> ans;

        int sr=0;
        int sc=0;
        int er=m-1;
        int ec=n-1;

        while(cnt < total){

            for(int i=sc; i<=ec && cnt<total; i++){
                ans.push_back(mat[sr][i]);
                cnt++;
            }

            sr++;


            for(int i=sr; i<=er && cnt<total; i++){
                ans.push_back(mat[i][ec]);
                cnt++;
            }

            ec--;


            for(int i=ec; i>=sc && cnt<total; i--){
                ans.push_back(mat[er][i]);
                cnt++;
            }

            er--;


            for(int i=er; i>=sr && cnt<total; i--){
                ans.push_back(mat[i][sc]);
                cnt++;
            }

            sc++;

        }

        return ans;
        
    }
};
