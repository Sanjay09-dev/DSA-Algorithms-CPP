void dfs(int node,vector<vector<int>>& adj,vector<bool>& visited){
    visited[node]=true;
    for(int nei:adj[node]){
        if(!visited[nei])
            dfs(nei,adj,visited);
    }
}
