class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        for(int i=1;i<=rowIndex+1;i++){
            ans.clear();
            long long c=1;
            for(int j=1;j<=i;j++){
                ans.push_back(c);
                c=c*(i-j)/j;
            }
        }
        return ans;
    }
};