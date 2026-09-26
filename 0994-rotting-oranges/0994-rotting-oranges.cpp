class Solution {
public:

int multipleBfs ( vector<vector<int>>& grid ){



    queue<pair<pair<int,int>,int>>q;
    int n = grid[0].size();//col--->Y
    int m= grid.size();// rows -->X

    vector<vector<bool>>vis(m,vector<bool>(n,false));


    for  ( int i =0 ; i<m ;i++){
for( int j =0; j<n;j++){
    if ( grid[i][j]==2){
        q.push({{i,j},0});
    }
}
    }
int ans=0;// time=0 
while( !q.empty()){
    int i = q.front().first.first;
    int j= q.front().first.second;
    int time= q.front().second;
q.pop();
    ans=max( ans, time);

    // transversing all the 4 directions
//left
    if ( i-1>=0&& !vis[i-1][j]&& grid[i-1][j]==1){
        q.push( {{i-1,j},time+1});
        vis[i-1][j] = true;
    }
    
    //right
      if ( i+1<m&& !vis[i+1][j]&& grid[i+1][j]==1){
        q.push( {{i+1,j},time+1});
        vis[i+1][j] = true;

    }
    //up
      if ( j-1>=0&& !vis[i][j-1]&& grid[i][j-1]==1){
        q.push({ {i,j-1},time+1});
        vis[i][j-1] = true;
    }  
    //down
    
    if ( j+1<n&& !vis[i][j+1]&& grid[i][j+1]==1){
        q.push( {{i,j+1},time+1});
        vis[i][j+1] = true;
    }
}

// check for unvisited node 

    for  ( int i =0 ; i<m ;i++){
for( int j =0; j<n;j++){
    if( !vis[i][j]&& grid[i][j]==1){
        return -1;
    }

}}
return ans;


}



    int orangesRotting(vector<vector<int>>& grid) {
        return multipleBfs( grid);
    }
};