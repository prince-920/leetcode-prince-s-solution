class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {

    int n = coordinates.size(); //row
    int m = coordinates[0].size();// col

        // 2 points
    if ( n==1){ return true;}
    

    // multiple points( atleast 3 point , 3,4,5,6 ...)

// point at index 0
int x1= coordinates[0][0];
int y1= coordinates[0][1];

int x2= coordinates[1][0];
int y2= coordinates[1][1];

// in case of x1==x2

if( x1==x2){ // this means line is || to y axis 

    for( int i=2;i<n;i++){
        if(  coordinates[i][0]!=x1){ return false;} 
        


    }
    return true;
}



float slope =float (y2-y1 )/(x2-x1);

bool flag= true;
for( int i =2 ;i<n;i++){
    int x=coordinates[i][0];
    int y=coordinates[i][1];

// ignored valid point , just invalid pe flag ko false
    if( y!=(slope*(x-x1)+y1)) {flag= false;}
    
}





    return flag;

    

        
    }
};