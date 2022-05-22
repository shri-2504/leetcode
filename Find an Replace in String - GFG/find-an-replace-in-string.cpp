// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string findAndReplace(string S ,int Q, int index[], string sources[], string targets[]) {
        string ans;
        int n=S.size();
        map<int,pair<pair<string,string>,pair<int,int>>> mp;
        for(int i=0;i<Q;i++){
            mp[index[i]]={{sources[i],targets[i]},{index[i],sources[i].size()}};
        }
        for(int i=0;i<n;i++){
            if(mp.count(i)){
                auto temp=mp[i].second;
                string str=S.substr(temp.first,temp.second);
                // cout<<i<<" "<<ans<<" "<<str<<" "<<temp.first<<" "<<temp.second<<endl;
                if(str == mp[i].first.first){
                    ans+=mp[i].first.second;
                    i+=temp.second-1;
                }
                else ans+=S[i];
            }
            else ans+=S[i];
        }
        return ans;
    }
    
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        
        int Q;
        cin>>Q;
        int index[Q];
        string sources[Q], targets[Q];
        
        for(int i=0; i<Q; i++)
            cin>>index[i];
        for(int i=0; i<Q; i++)
            cin>>sources[i];
        for(int i=0; i<Q; i++)
            cin>>targets[i];

        Solution ob;
        cout<<ob.findAndReplace(S,Q,index,sources,targets)<<endl;
    }
    return 0;
}  // } Driver Code Ends