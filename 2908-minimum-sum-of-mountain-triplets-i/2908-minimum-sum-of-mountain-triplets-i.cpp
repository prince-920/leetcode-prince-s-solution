class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
int sum ;
vector<int>ans;
        for ( int i =0 ; i<n ; i++){
            for ( int j =0; j<n ; j++){
                for ( int k = 0 ; k<n ; k++){

if ( (i!=j) && ( j!=k) &&( i<j)&&( j<k)){
    if ( (nums[i] < nums[j])&&(nums[k] < nums[j])){
sum = nums[i] + nums[j] + nums[k];
        ans.push_back( sum);
    }
}
                }
            }
        }

        sort( ans.begin(), ans.end());
       if ( !ans.empty()){
        return ans[0];
       }
       else{
        return -1;
       }


    }
};