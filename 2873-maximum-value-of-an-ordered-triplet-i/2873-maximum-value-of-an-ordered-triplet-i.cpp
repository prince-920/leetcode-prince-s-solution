class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();

        vector<long long> ans;
        long long diff;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {

                    if ((i != j) && (j != k) && (i < j) && (j < k)) {
                        diff = 1LL * (nums[i] - nums[j]) * nums[k];

                        ans.push_back(diff);
                    }
                }
            }
        }
        sort(ans.begin(), ans.end());
        int m = ans.size();

        if (ans[m - 1] < 0) {
            return 0;
        } else {
            return ans[m - 1];
        }
    }
};