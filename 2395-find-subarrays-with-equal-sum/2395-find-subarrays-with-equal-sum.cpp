class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int n= nums.size();
        vector<int>ans;
        for( int i=0 ;i<n;i++){
            int sum =0;
            if ( i+1<n){
                sum = nums[i]+nums[i+1];
                ans.push_back(sum);
            }
        }
        // for( int i =0 ;i<ans.size() ;i++){
        //     for ( int j=i+1;j<ans.size();j++){
        //         if ( i+1<ans.size()){
        //             if ( nums[i]==nums[j]){
        //                 return true;
        //             }
        //         }
                
        //     }
        // }
        // return false;
        
        map<int, int>map;
    
    for( int i =0 ;i<ans.size() ;i++){
        map[ans[i]]++;

    }
    for( auto it: map){
        if (it.second>=2 ){
            return true;
        }
    }
    return false;

    }
};