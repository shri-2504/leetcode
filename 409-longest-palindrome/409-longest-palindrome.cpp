class Solution {
public:
    int longestPalindrome(string s) {
        int ans=0;
        map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int greatestodd=INT_MIN;
        for(auto it:mp){
            if(it.second%2==0)ans+=it.second;
            else if(it.second%2!=0){
               greatestodd= max(greatestodd,it.second);
            }
        }
        
        // cout<<"greatestOdd: "<<greatestodd<<endl;
        // cout<<"current even sum: "<<ans<<endl;
        // for(auto i: mp) {
        //     cout<<"character: "<<i.first;
        //     cout<<"\tFrequency: "<<i.second<<endl;
        // }
            
        if(greatestodd!=INT_MIN)
            {
                for(auto it:mp){
                    if(it.second%2!=0){
                        ans+=it.second - 1;
                    }   
                } 
            ans+=1;
        }
        
        return ans;
    }
};