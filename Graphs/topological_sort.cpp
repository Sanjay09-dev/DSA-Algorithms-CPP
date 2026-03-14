vector<int> topoSort(int n,vector<vector<int>>& adj){
    vector<int> indeg(n);
    for(int i=0;i<n;i++)
        for(int v:adj[i])
            indeg[v]++;
    queue<int> q;
    for(int i=0;i<n;i++)
        if(indeg[i]==0)
            q.push(i);
    vector<int> res;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        res.push_back(node);
        for(int v:adj[node]){
            indeg[v]--;
            if(indeg[v]==0)
                q.push(v);
        }
    }
    return res;
}
