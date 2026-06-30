class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n = nums.size();
        int singleSum = 0;
        int doubleSum =0 ;
        for ( int i =0 ; i< n ; i++){
            if ( nums[i]<10){
                singleSum = singleSum + nums[i];

            }
            else{
                doubleSum = doubleSum +nums[i];
            }
        }


if ( singleSum ==doubleSum) {return false;}
else{
    return true;

    }
}
};