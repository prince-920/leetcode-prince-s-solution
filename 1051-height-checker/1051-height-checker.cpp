class Solution {
public:
    int heightChecker(vector<int>& heights) {

        int n= heights.size();
                vector<int>current;
            current= heights;

        sort (heights.begin(),heights.end());
        

        vector<int>expected;
        expected=heights;

        int count=0;
        for( int i =0 ;i<n ;i++){
            if ( current[i]!=expected[i]){
                count++;
            }
        }
        return count;
        
    }
};