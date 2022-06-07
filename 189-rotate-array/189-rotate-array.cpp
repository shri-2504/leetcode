class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        deque<int> dq;
        k=n-k;
        for(int i=0;i<n;i++) {
            dq.push_back(nums[i]);
        }
        
        for(int i=0;i<k;i++){
            dq.push_back(dq.front());
            dq.pop_front();
        }
        int j=0;
        for(auto i:dq){
            nums[j++]=i;
        }
        
    }
};