class Solution {
public:
    int longestPalindrome(string s) {
        int ans=0;
        map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int flag=0;
        int greatestodd=INT_MIN;
        for(auto it:mp){
            if(it.second%2==0)ans+=it.second;
        }
        
        // cout<<"greatestOdd: "<<greatestodd<<endl;
        // cout<<"current even sum: "<<ans<<endl;
        // for(auto i: mp) {
        //     cout<<"character: "<<i.first;
        //     cout<<"\tFrequency: "<<i.second<<endl;
        // }
            
                for(auto it:mp){
                    if(it.second%2!=0){
                        ans+=it.second - 1;
                        flag=1;
                    }   
                } 
           if(flag==1)return ans+1;
        
        return ans;
    }
};