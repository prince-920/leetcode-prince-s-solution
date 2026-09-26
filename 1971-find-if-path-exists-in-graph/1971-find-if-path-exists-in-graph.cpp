class Solution {
public:
bool bfs  (vector<vector<int>>&adj, unordered_map<int,bool>& visited , vector<int>ans,int source, int destination ,  bool & flag ){

    queue<int>q;
    q.push(source);
    visited[source]=1;

    while( !q.empty()){
        int frontnode= q.front();
        q.pop();
     
     if( frontnode==destination) return true;

for( auto it: adj[frontnode]){
    if ( (!visited[it])){
        q.push(it);
        visited[it]=1;
    }
}


    }




return false;

}

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        // edges are given in vector --> convert it in adjList

        vector<vector<int>>adj(n);
      for  (auto edge:edges) { 
        int u= edge[0];
        int v= edge[1];

        adj[u].push_back(v);
        adj[v].push_back(u);

}


        bool flag;
         unordered_map<int,bool> visited;
         vector<int>ans;

     return  bfs( adj,visited,ans,source,destination, flag);
       

    }
};