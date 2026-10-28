class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        // procceding via sliding window

        int n = nums.size();
        int left=0;
        int sum=0;
        int ans= INT_MAX;

        for(int i=0 ; i<n;i++){
            sum= sum+nums[i];
            while(sum>=target){
                ans= min(ans,i-left+1);
                sum=sum-nums[left];
                left++;
            }



        }

        return ans== INT_MAX ? 0:ans;
    }
};