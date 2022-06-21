class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        while(k>0){
            int temp;
            int maxi=INT_MIN;
        for(auto i:mp){
            if(i.second>maxi){
                maxi=i.second;
                temp=i.first;
             }
         }
            k--;
            ans.push_back(temp);
            mp.erase(temp);
      }
        return ans;
    }
};