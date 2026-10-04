class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
         int n =nums.size();
int count =1;
int max_longest=1;
if ( n==0){
    return 0;
}
//sort(nums.begin(), nums.end());
         for( int i =0 ; i<n-1 ; i++){
            //if ( i+1<n){
                if( nums[i+1]>nums[i]){
                    count++;
                    max_longest=max(count,max_longest);
                }
               
               
            //}
             else{
                    count=1;
                }
         }

        return  max_longest;
    }
};