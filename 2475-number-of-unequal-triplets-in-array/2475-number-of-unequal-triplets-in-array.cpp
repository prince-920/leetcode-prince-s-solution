class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int count =0;
        int n = nums.size();
        for ( int i =0 ; i<n ; i++){
            for ( int j =0 ; j<n ; j++){
                for ( int k=0 ; k<n ; k++){
    
    if ( ( i<j) && (j<k)&&(i<k)&&(i !=j)&&( j!=k)&&( i!=k)){
        if ((nums[i] != nums[j])&&(nums[i] != nums[k])&&(nums[k] != nums[j]) ){
            count ++;

        }
    }



                }
            }
        }
 return count;

    }
};