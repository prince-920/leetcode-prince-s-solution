class Solution {
public:

    int coinChange(vector<int>& coins, int amount) {
       int n = coins.size();

       vector<vector<int>>dp(n+1,vector<int>(amount+1,amount+1));

       for ( int i =1 ; i<=n;i++){
        for ( int j=0; j<=amount;j++){

 // Amount 0 requires 0 coins
        for (int i = 0; i <= n; i++) {
            dp[i][0] = 0;

        }

            // don't take it
            dp[i][j]=dp[i-1][j];

            // take it
            if ( coins[i-1]<=j){
                dp[i][j]= min(dp[i][j],
                1+dp[i][j-coins[i-1]]);
            }


        }
       }
if ( dp[n][amount]==amount+1) return -1;

return dp[n][amount];
        
    }
};