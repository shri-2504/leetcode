class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(auto i:matrix){
            for(auto n:i){
                cout<<n<<" ";
            }
            cout<<endl;
        }
        
        for(int i=0;i<n;i++){
           int l=0,e=n-1;
            while(l<e){
                swap(matrix[i][l],matrix[i][e]);
                l++;
                e--;
            }
        }
    }
};