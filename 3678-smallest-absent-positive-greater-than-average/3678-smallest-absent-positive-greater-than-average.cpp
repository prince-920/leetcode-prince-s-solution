class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int n = nums.size();

        sort( nums.begin(), nums.end());
        int sum=0;
        for ( int i =0 ;i<n;i++){
            
        sum =sum+nums[i];
        }

        float avg= (float)sum/n;
        int x = floor(avg)+1;
        //checking for sum <0
        if ( x<=1) {
           x= 1;
        }

// best way to transverse over all the elements of the array
        for (int num : nums) {
            if (num == x) {
                x++;
            }
        }

        return x;



        
    }
};