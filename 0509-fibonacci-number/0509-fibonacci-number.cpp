//tabulation code

class Solution {
public:
    int fib(int n) {
    //step1 
    vector<int>dp(n+1);
    //step2
  if ( n>0){
      dp[1]=1;
  }
    dp[0]=0;

    //step3
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];



    }
};