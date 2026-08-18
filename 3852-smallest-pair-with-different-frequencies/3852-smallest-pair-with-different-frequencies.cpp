class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        int n= nums.size();
        map<int,int>map;
        for ( int i =0;i<n;i++){
            map[nums[i]]++;

        }
vector<vector<int>> result;
for( int i =0 ;i<n ;i++){
    for ( int j =0 ;j<n ;j++){
        if ( i!=j){
            if ( nums[i]<nums[j]&& map[nums[i]]!=map[nums[j]]){
                result.push_back({nums[i],nums[j]});

            }
            
        }
    }
}
vector<int>ans;
ans.push_back(-1);
ans.push_back(-1);

sort( result.begin(),result.end());
if( result.size()!=0){
return result[0]; 
}
else{
    return ans;
}
        
    }
};