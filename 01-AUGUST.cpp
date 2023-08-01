class Solution {
  public:
    void dfs(int startnode, vector<int> adj[], vector<int> &ans, int vis[]){
        vis[startnode]=1;
        ans.push_back(startnode);
        //traversing all its neighbours
        for(int i=0; i<adj[startnode].size(); i++){
            if(!vis[adj[startnode][i]]){
                dfs(adj[startnode][i],adj,ans,vis);
            }
        }
        
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int start=0;
        int vis[V]={0};
        vector<int> ans;
        dfs(start,adj,ans,vis);
        return ans;
    }
};
