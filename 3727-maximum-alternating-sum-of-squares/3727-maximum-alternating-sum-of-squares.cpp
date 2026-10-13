class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {

        vector<int>sqr;
        for( int i =0 ;i<nums.size();i++){
            sqr.push_back(nums[i]*nums[i]);
        }

        sort(sqr.begin(),sqr.end());

        long long sum=0;
        int n = sqr.size();


        for( int i =0 ;i<n/2;i++){
            sum=sum-sqr[i];
            
        }

        for(int i= n/2;i<n;i++){
            sum = sum+sqr[i];
        }
        return sum;
        
    }
};