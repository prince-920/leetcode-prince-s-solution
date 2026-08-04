class Solution {
public:
int solve(vector<int>& nums, int target , int index , int currSum ){
// base case 
if ( currSum == target && index==nums.size()){
return 1;
}
if ( index==nums.size()){
    return 0 ;
}


// proccesing

int add =  solve( nums,target , index+1, currSum+nums[index]);

int sub = solve(nums, target , index+1, currSum - nums[index]);

return add +sub;


}



    int findTargetSumWays(vector<int>& nums, int target) {
        // taking parameter  nums, target , index, currSum, sum,

    return solve( nums, target , 0, 0);
    }
};