class Solution {       // land->water[min distance]
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size(); //rows
        int m = grid[0].size();//cols

queue<pair<pair<int,int>,int>>q;//. ({i,j},count)
        vector<vector<bool>>visited(n,vector<bool>(m,false));//rows->col

for( int i =0 ;i<n;i++){
    for(int j =0 ; j<m ;j++){
        if( grid[i][j]==1){
            q.push({{i,j},0});
            visited[i][j]=true;
        }
    }
}
int ans=-1;
while(!q.empty()){

    int i =q.front().first.first;
    int j =q.front().first.second;
    int dist= q.front().second;
    q.pop();

  if( grid[i][j]==0) {  ans = max(ans, dist);}

//for each node transversing all 4 directions
        //up
            if( j-1>=0&& grid[i][j-1]==0&& !visited[i][j-1]){
                q.push({{ i, j-1},dist+1});
                visited[i][j-1]=true;
                
            }


            // down
             if( j+1<m&& grid[i][j+1]==0&& !visited[i][j+1]){
                q.push({{ i, j+1},dist+1});
                visited[i][j+1]=true;
            }

            //left 
             if( i-1>=0&& grid[i-1][j]==0&& !visited[i-1][j]){
                q.push({{ i-1, j},dist+1});
                visited[i-1][j]=true;
            }

            //right
              if( i+1<n&& grid[i+1][j]==0&& !visited[i+1][j]){
                q.push({{ i+1, j},dist+1});
                visited[i+1][j]=true;
            }
        

    






}



return ans;

        
    }
};