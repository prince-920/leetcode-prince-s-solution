class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int>map;
int n = nums.size();
        for( int i =0 ;i<nums.size();i++){
            for ( int j =0 ; j<nums[i].size();j++){
                map[nums[i][j]]++;
            } 
        }

        int totalArray = 0;
        for ( int i =0 ; i<nums.size() ;i++){
            totalArray = totalArray + nums[i].size();

        }
        vector<int>ans;

        for ( auto it: map){
            if ( it.second==nums.size()){
                ans.push_back( it.first);
            }
        }
        if ( ans.size()!=0){
            return ans;
        }
return {};
        
        
    }
};