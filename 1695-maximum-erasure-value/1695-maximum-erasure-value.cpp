class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int> mp;
        int i=0,j=0,maxi=INT_MIN;
        int sum=0;
        while(j<nums.size()){
            mp[nums[j]]++;
            sum+=nums[j];
            if(mp.size()==j-i+1)maxi=max(maxi,sum);
            else if(mp.size()<j-i+1){
                while(mp.size()<j-i+1){
                    mp[nums[i]]--;
                    sum-=nums[i];
                    if(mp[nums[i]]==0)mp.erase(nums[i]);
                    i++;
                }
            }
            j++;
        }
        return maxi;
    }
};