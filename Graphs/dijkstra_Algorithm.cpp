vector<int> dijkstra(int n,vector<vector<pair<int,int>>>& adj,int src){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> pq;
    vector<int> dist(n,INT_MAX);
    dist[src]=0;
    pq.push({0,src});
    while(!pq.empty()){
        auto [d,node]=pq.top();
        pq.pop();
        for(auto [nei,w]:adj[node]){
            if(d+w<dist[nei]){
                dist[nei]=d+w;
                pq.push({dist[nei],nei});
            }
        }
    }

    return dist;
}
