class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n= nums.size();
        vector<int>ans;
        for( int i =0;i<n;i++){
            for ( int j=0 ;j<n ;j++){
                for( int k=0;k<n ;k++){
                    if ( (i!=j)&&(j!=k)&&(i!=k)){
                        if ((nums[i]==nums[j])&&(nums[j]==nums[k])&&(nums[i])==nums[k]){
                            ans.push_back(abs(i - j) + abs(j - k) + abs(k - i));
                        }
                    }
                }
            }
        }
sort(ans.begin(),ans.end());
if ( ans.size()!=0){
    return ans[0];

} 
return -1;       
    }
};