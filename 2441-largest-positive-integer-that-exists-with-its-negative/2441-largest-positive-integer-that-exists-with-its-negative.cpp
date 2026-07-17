class Solution {
public:
    int findMaxK(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        for ( int i= 0 ; i<n ; i++){
            for ( int j = 0 ; j<n ; j++){
 if ( i !=j ){
    if ( (nums[i]+nums[j])==0){

ans.push_back ( abs( nums[i]));
    }
 }
     }
        }
        
     sort ( ans.begin(), ans.end());
     int m =ans.size();
     if ( !ans.size()){
        return -1;
     }
     else{
        return ans[m-1];
     }


    }
};