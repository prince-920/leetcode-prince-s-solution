class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;

        for ( int i = 0 ; i<nums.size();i++){
        if ( nums[i] !=val){
        nums[count]=nums[i]; //array ko bhi modify karna h ,ie pahle elements bharne h jo nums[i]!=val h ,  count return karo

            count++;  
        }
        }
        return count;
    }
};