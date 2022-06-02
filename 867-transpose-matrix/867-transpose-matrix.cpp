class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int N=matrix[0].size();
        int M=matrix.size();
         vector<vector<int>> matrix1(N, vector<int>(M, 0));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
               matrix1[j][i]=matrix[i][j];
            }
        }
        return matrix1;
    }
};