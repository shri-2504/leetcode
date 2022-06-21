class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>>pq;
        map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        for(auto j:mp){
            pq.push({j.second,j.first});
        }
        string str="";
     //   cout<<pq.top().second<<"   "<<pq.top().first<<endl;
      /// str+=string(3,'f');
        while(!pq.empty()){
            str+=string(pq.top().first,pq.top().second);
            pq.pop();
        }
        
        return str;
    }
};