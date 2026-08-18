class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {

        int n =nums.size();
        unordered_map<int, int>map;
        // for ( int i =0;i<n ;i++){
        //     for( int j=0;j<n ;j++){
        //         if ( i!=j){
        //             if (nums[i]%2==0&& nums[j]%2==0){
        //                 if ( nums[i]!=nums[j]){
        //                     return nums[i];
        //                 break;
        //                 }
        //             }
        //         }
        //     }
        // }
for ( int i =0;i<n ; i++){
    if ( nums[i]%2==0){
        map[nums[i]]++;
    }
}
// unordered map store no in unordered manner not following any sequence so go by normal transversing over idex of array
for (int i=0 ;i<n ;i++){
    if ( nums[i]%2==0 && map[nums[i]]==1){
        return nums[i];
    }


}



return -1;



    }
};