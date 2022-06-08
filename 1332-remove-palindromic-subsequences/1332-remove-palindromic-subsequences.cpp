class Solution {
public:
    int removePalindromeSub(string s) {
       int i=0,j=s.length()-1;
        int flag=0;
        while(i<=j){
            if(s[i++]!=s[j--]){
                flag=1;
            }
        }
        if(flag==1)return 2;
        else return 1;
    }
};