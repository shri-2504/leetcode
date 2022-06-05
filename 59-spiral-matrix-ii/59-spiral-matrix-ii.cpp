class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
         vector<vector<int>> ans(n,vector<int>(n));
        int top=0,down=n-1,left=0,right=n-1;
        int dir=0,count=1;
        while(top<=down && left<=right){
            if(dir==0){
            for(int i=left;i<=right;i++){
                     ans[top][i]=count++;
               }
                top++;
                // dir=1;
            }
            else if(dir==1){
                for(int i=top;i<=down;i++){
                     ans[i][right]=count++;
                }
                right--;
                // dir=2;
            }
            else if(dir==2){
                for(int i=right;i>=left;i--){
                     ans[down][i]=count++;
                }
                down--;
                // dir=3;
            }
            else if(dir==3){
                for(int i=down;i>=top;i--){
                     ans[i][left]=count++;
                }
                left++;
                // dir=0;
            }
           dir=(dir+1)%4;
        }
        return ans;
    }
};