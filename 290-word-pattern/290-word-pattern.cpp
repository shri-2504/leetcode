class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream str(s);
        vector<string> v;
        string word;
        while(str>>word){
            v.push_back(word);
        }
        // for(auto it:v){
        //     cout<<it<<endl;
        // }
        // return false;
        if(pattern.length()!=v.size())return false;
        map<char,string> mp;
        for(int i=0;i<pattern.length();i++){
            if(mp.find(pattern[i])!=mp.end()){
                if(mp[pattern[i]]!=v[i])
                   return false;
                else continue;
            }
            else{
                mp[pattern[i]]=v[i];
            }
        }
        map<string,char> mp1;
        for(int i=0;i<v.size();i++){
            if(mp1.find(v[i])!=mp1.end()){
                if(mp1[v[i]]!=pattern[i])
                   return false;
                else continue;
            }
            else{
                mp1[v[i]]=pattern[i];
            }
        }
        return true;
    }
};