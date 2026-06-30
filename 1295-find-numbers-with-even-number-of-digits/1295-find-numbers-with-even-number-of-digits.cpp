class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;

        for( int i = 0 ; i<n ; i++){
                    int count = 0 ;

            while ( nums[i]!=0){
               nums[i] =nums[i]/10;
                count ++;
            }
            ans.push_back(count);
        }
int evencount = 0;
        for ( int i = 0 ; i< n ;i++){
            if ( ans[i]%2 ==0 ){
                evencount++;
            }
        }
        return evencount;


    }
};