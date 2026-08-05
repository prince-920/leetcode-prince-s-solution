// recc +Memo solution

// is ques ka recc solution tle mara as , yaha bhot se case aise h jo repeat kar rahe h ,and in recc hm un cases ko again fir se solve kar rahe h , so we planned to store the value in dp--->>>>>>. feel of using dp
class Solution {
public:

int solve( vector<int>& nums, int target, vector<int>&dp){

//base case
if ( target==0) return 1;
if ( target <0) return 0;

//s-3 checking 
if ( dp[target]!=-1)return dp[target];


int ans=0;
int   n= nums.size();
for( int i =0;i<n;i++){
    ans=ans +solve( nums,target-nums[i],dp);
}

// s2 storing data in dp
dp[target]=ans;

return dp[target];


}



    int combinationSum4(vector<int>& nums, int target) {
        //1dp as only target is changing
        vector<int>dp(target+1,-1); //s-1

        return solve( nums, target,dp);


    }
};