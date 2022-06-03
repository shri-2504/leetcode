class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int currsum=0;
        for(int i=0;i<nums.size();i++){
            currsum+=nums[i];
            if(currsum>maxi)maxi=currsum;
            if(currsum<0)currsum=0;
        }
        return maxi;
    }
};