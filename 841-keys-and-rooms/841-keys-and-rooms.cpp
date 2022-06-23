class Solution {
public:
      void dfs (vector<vector<int>>& rooms, int i, vector<bool> &visited) {
        if( visited[i] ) return;
        visited[i] = true;
        for ( int j=0; j<rooms[i].size(); j++) {
            if( !visited[rooms[i][j]] ){
                dfs ( rooms , rooms[i][j] , visited);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visit(n,false);
        dfs ( rooms , 0, visit);
        for( int i=0; i<n; i++) {
            if( !visit[i] ) return false;
        }
        return true;
    }
};