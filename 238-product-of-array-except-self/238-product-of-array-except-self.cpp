class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n);
        left[0]=nums[0];
        for(int i=1;i<n;i++){
          left[i]=nums[i]*left[i-1];
        }
         for(int i=0;i<n;i++){
          cout<<left[i]<<" ";
        }
        vector<int> right(n);
        right[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=nums[i]*right[i+1];
        }
         for(int i=0;i<n;i++){
           cout<<right[i]<<" ";
        }
        vector<int> ans(n);
        ans[0]=right[1];
        ans[n-1]=left[n-2];
        for(int i=1;i<n-1;i++){
            ans[i]=left[i-1]*right[i+1];
        }
        return ans;
    }
};