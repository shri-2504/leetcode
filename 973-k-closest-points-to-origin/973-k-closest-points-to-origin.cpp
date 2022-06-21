class Solution {
public:
    pair<double,vector<int>>distance(vector<int>point){
        double d=sqrt(pow(point[0],2)+pow(point[1],2));
        return {d,point};
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
         vector<vector<int>> ans;
      
priority_queue<pair<double,vector<int>>,vector<pair<double,vector<int>>>,greater<pair<double,vector<int>>>>pq;
       
            for(auto it:points){
                pair<double,vector<int>>temp=distance(it);
               pq.push(temp);
            }
           while(k--){
               ans.push_back(pq.top().second);
               pq.pop();
           }
        return ans;
    }
};