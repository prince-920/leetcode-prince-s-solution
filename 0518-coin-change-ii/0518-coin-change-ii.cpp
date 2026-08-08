class Solution {
public:

// it's 2d dp 
int solve( int amount,vector<int>& coins, int index, vector<vector<int>>&dp){
//base case

if( amount==0) return 1;
if(amount<0) return 0;
if( index== coins.size()) return 0;

int n=coins.size();

if( dp[amount][index]!=-1) return dp[amount][index];


// each coin i heave 2 option , accept or leave
// take
int take=solve(amount-coins[index],coins,index, dp);
//skip
int skip=solve(amount,coins,index+1,dp);

dp[amount][index]= skip+take;
return dp[amount][index];

}


    int change(int amount, vector<int>& coins) {
// no of rows = amount+1 ,as starting from 0
//c0l= coins.size()
vector<vector<int>>dp(amount+1,vector<int>(coins.size(),-1));

int index=0;
return solve ( amount,coins, index,dp); 


    }
};