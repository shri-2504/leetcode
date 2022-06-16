class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans;
        //stack<char> s1;
        int op=0,cl=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')op++;
            else if(s[i]==')')cl++;
            if(op>=cl)ans+=s[i];
            else{
                if(s[i]=='(')
                op--;
                else cl--;
            }
        }
        op=cl=0;
        s=ans;
        ans="";
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='(')op++;
            else if(s[i]==')')cl++;
            if(cl>=op)ans+=s[i];
            else{
                if(s[i]=='(')
                op--;
                else cl--;
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};