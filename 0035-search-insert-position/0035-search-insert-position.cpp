class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
sort(nums.begin(), nums.end());

for( int i =0 ; i<n;i++){
    if  ( nums[i]==target) return i;

    else{ /// not found

    if  ( i+1<n){// in between
        if( nums[i]<target&& nums[i+1]>target){
            return i+1;
        }
    }

    if ( target<nums[i]){ return 0;}


    }
}

        return n;
    }
};