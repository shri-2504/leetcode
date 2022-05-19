class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> ans;
        set<int> temp;
        for(int i=0;i<nums1.size();i++)ans.insert(nums1[i]);
        for(auto i:nums2){
            if(ans.count(i))temp.insert(i);
        }
        vector<int> sol;
        for(auto i:temp)sol.push_back(i);
        return sol;
    }
};