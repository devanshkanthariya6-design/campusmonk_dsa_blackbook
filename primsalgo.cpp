//TC - ELOGE

/*class Solution {
  public:
    int spanningTree(int V, vector<vector<int>>& edges) {
        // code here
        vector<pair<int,int>>adj[V];
        for(auto it:edges){
            int u=it[0];
            int v=it[1];
            int w=it[2];
            
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        
        priority_queue<pair<int,int> ,vector<pair<int,int>> ,greater<pair<int,int>>>pq;;
        int sum=0;
        vector<int>vis(V,0);
        pq.push({0,0});
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int weight=it.first;
            int node=it.second;
            if(vis[node]==1)continue;
            sum+=weight;
            vis[node]=1;
            for(auto it:adj[node]){
                int adjnode=it.first;
                int adjwt=it.second;
                if(!vis[adjnode]){
                    pq.push({adjwt,adjnode});
                }
            }
        }
        return sum;
    }
};*/
