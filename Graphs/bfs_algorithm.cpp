void bfs(int start,vector<vector<int>>& adj){
    vector<bool> visited(adj.size(),false);
    queue<int> q;
    q.push(start);
    visited[start]=true;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(int nei:adj[node]){
            if(!visited[nei]){
                visited[nei]=true;
                q.push(nei);
            }
        }
    }
}
