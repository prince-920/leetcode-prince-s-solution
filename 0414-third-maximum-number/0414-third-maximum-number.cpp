class Solution {
public:
    int thirdMax(vector<int>& nums) {
sort(nums.rbegin(),nums.rend());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        int n = nums.size();
int k =3;
        if ( n>=k){
            return nums[k-1];
        }
        else 
        return nums[0];
    }
};