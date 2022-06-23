class Solution {
public:
    string longestPalindrome(string s) {
          int n = s.size();
        int dp[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                dp[i][j] = 0;
            }
        }
        for(int i =0;i<n;i++){
            dp[i][i] = 1;
        }
        for(int l=1;l<=n-1;l++){
            for(int i=0;i<= n-l;i++){
                int j = i + l;
                if(j < n){
                    if(j-i==1){
                        if(s[i] == s[j]){dp[i][j] = 1;}
                        else{dp[i][j] = 0;}
                    }
                    else{
                        if(s[i]==s[j] && dp[i+1][j-1] == 1){
                            dp[i][j] = 1;
                        }
                        else{
                            dp[i][j] = 0;
                        }
                    }
                    
                }

            }
        }
        int maxl = 0;
        string ans = "";
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(dp[i][j] == 1){
                    if(j-i+1 > maxl){
                        maxl = j-i+1;
                        ans = "";
                        for(int kk=i;kk<=j;kk++){
                            ans += s[kk];
                        }
                        
                    }
                }
            }
        }
        return ans;
    }
};