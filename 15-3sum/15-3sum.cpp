class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3)return{};
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans1;
        set<vector<int>> s;
        for(int i=0;i<nums.size()-2;i++){
            int l=i+1,e=nums.size()-1;
            if(i>0&&nums[i]==nums[i-1])
                continue;
            int target =(-1)*nums[i];
            while(l<e){
                if(nums[l]+nums[e]<target){
                    l++;
                }
                else if(nums[l]+nums[e]>target){
                    e--;
                }
                else if(nums[l]+nums[e]==target){
                    vector<int> ans;
                    ans.push_back(nums[i]);
                    ans.push_back(nums[l]);
                    ans.push_back(nums[e]);
                    s.insert(ans);
                   l++;e--; 
                }
            }
        }
        for(auto it:s){
            ans1.push_back(it);
        }
        return ans1;
    }
};