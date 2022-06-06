class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            int l=0,e=matrix[0].size()-1;
            while(l<=e){
                int mid=l+(e-l)/2;
                if(matrix[i][mid]==target)return true;
                else if(matrix[i][mid]<target)l=mid+1;
                else e=mid-1;
            }
        }
        return false;
    }
};