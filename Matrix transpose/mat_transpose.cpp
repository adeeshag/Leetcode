//
// Created by Adeesh Ankaraju Gopalakrishnan on 2019-01-22.
//

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int inner_size = A[0].size(), outer_size = A.size();
        vector<vector<int>> ret_list(inner_size, vector<int>(outer_size,0));
        for(int i=0;i<outer_size;++i){
            for(int j=0;j<inner_size;++j){
                ret_list[j][i] = A[i][j];
            }
        }

        return ret_list;
    }
};