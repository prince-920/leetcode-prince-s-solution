class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        sort( nums.begin(),nums.end());
        
        for( int i =0; i<n ; i++){
            sum=  sum+ (nums[i]-nums[0]);
cout<<sum;
        
        }


return sum;


    }
};