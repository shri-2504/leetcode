class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        int start=0,end=0;
        vector<int> endi(26,0);
        for(int i=0;i<s.length();i++){
            endi[s[i]-'a']=i;
        }
        for(int i=0;i<s.length();i++){
            end=max(end,endi[s[i]-'a']);
            if(i==end){
                ans.push_back(i-start+1);
                start=i+1;
            }
        }
        return ans;
    }
};