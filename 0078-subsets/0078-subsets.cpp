class Solution {
public:

 void solve(vector<int> nums,vector<int>output,  vector<vector<int>>&ans , int i  ){

// base case
if ( i>=nums.size()){
ans.push_back(output);  // poora ek array input hota h 2d vector ka
return;

}

//. handling exclude case

solve(nums,output,ans,i+1);

// include case
int element = nums[i];
output.push_back(element);
solve(nums,output,ans,i+1);

 }


    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        vector<vector<int>>ans;
        vector<int>output;

         solve(nums,output,ans,i);
return ans;



    }
};