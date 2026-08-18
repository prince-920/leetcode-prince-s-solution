class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        int n = nums.size();
        
        sort(nums.rbegin(),nums.rend());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());

        vector<int>ans;
        if ( k>=n){
            for ( int i =0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        }
        else{//k<n
        for ( int i =0;i<k;i++){
            ans.push_back(nums[i]);
        }
        }


        sort(ans.rbegin(),ans.rend());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());

        return ans;
        
    }
};