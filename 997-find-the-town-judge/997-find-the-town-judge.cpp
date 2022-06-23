class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size()==0 && n==1) return 1;
        vector<vector<int>> adj(n+1);
        for(auto it:trust){
            adj[it[0]].push_back(it[1]);
        }
        vector<int> indegree(n+1,0);
        for(int i=0;i<trust.size();i++){
            indegree[trust[i][1]]++;
        }
        for(int i=0;i<=n;i++){
            if(indegree[i]==n-1 && adj[i].size()==0){
                return i;
            }
        }
        return -1;
    }
};