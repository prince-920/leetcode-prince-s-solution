class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
bool incr=true;
bool decr= true;

        int  n = nums.size();

        for( int i =0 ; i<n-1; i++){

                if (nums[i]>nums[i+1]){
                   incr=false;
                  // break;
                }
                if (nums[i]<nums[i+1]) {
                    decr= false;
                  //  break;
                }
               


            

        


        }
        if ( incr== false && decr == false)

       return false;
       else{
        return true;
       }
       
        
    }
};