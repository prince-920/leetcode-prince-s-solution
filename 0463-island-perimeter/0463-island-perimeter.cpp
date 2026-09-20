class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();// n no of rows
        int m= grid[0].size(); //cols
int count=0;

        for ( int i =0 ; i<n ; i++){
            for( int j =0 ;j<m;j++){

if ( grid[i][j]==1){ //land

//up
if ( i>0&& grid[i-1][j]==0|| i==0){
    count++;
}


//down
if (   i<n-1&&grid[i+1][j]==0|| i==n-1){
    count++;
}


//right
if ( j<m-1&& grid[i][j+1]==0|| j==m-1){
    count++;
}

//left
if( j>0&& grid[i][j-1]==0||j==0){
    count++;
}
}

            }
            }
        

        return count;
        
    }
};