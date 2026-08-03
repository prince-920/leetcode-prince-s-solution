// recc + memoisation
class Solution {
public:
    bool solve(vector<int>& nums, int x, int i,  vector<vector<int>>&dp) {
        // base case

        if (x == 0)
            return true;

        if (i >= nums.size()) {
            return false;
        }
        //memoization
        if ( dp[i][x]!=-1){
            return dp[i][x];
        }





        // rr call

        bool take = false;
        if (nums[i] <= x) {

            take = solve(nums, x - nums[i], i + 1,dp);
        }

        bool not_take = solve(nums, x, i + 1,dp);

        return  dp[i][x]=take || not_take;
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();

        int sum = 0;
        int index = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + nums[i];
        }
        if (sum % 2 != 0) {
            return false;
        }

        int x = sum / 2;
        vector<vector<int>>dp(n, vector<int>(x+1,-1));

        return solve(nums, x, index ,dp);
    }
};