class Solution {
public:
    int maxSum(vector<int>& nums) {
                sort( nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        
        int n= nums.size();
        int sum =0;
        bool flag =false;
        for ( int i =0;i<n;i++){
            if (nums[i]>0){
                flag =true;
            }
        }
        if ( flag==false){
            return nums[n-1];
        }






        for ( int i =0 ;i<n ;i++){
           if ( nums[i]>0){
             sum = sum +nums[i];
           }
            

        }
        return sum;
        
    }
};