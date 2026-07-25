// tabulation
class Solution {
public:
    int climbStairs(int n) {

//s-1
vector<int>dp(n+1);

//s-2
dp[0]=1;
dp[1]=1;

//s-3
for( int i=2;i<=n;i++){
    dp[i]=dp[i-1]+dp[i-2];
}

return dp[n];
        
    }
};