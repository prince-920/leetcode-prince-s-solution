class Solution {
public:

    vector<int> findStart(map<int,int>& mp, int degree) {
        vector<int> starts;

        for(auto it : mp) {
            if(it.second == degree) {
                starts.push_back(it.first);
            }
        }

        return starts;
    }

    int findShortestSubArray(vector<int>& nums) {

        int n = nums.size();

        map<int, int> mp;

        for(int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        // Find degree
        int degree = 0;

        for(auto it : mp) {
            degree = max(degree, it.second);
        }

        // Get all elements having degree frequency
        vector<int> starts = findStart(mp, degree);

        vector<int> result;

        // Find answer for every such element
        for(int start : starts) {

            vector<int> ans;

            for(int i = 0; i < n; i++) {
                if(nums[i] == start) {
                    ans.push_back(i);
                }
            }

            int m = ans.size();

            result.push_back(ans[m - 1] - ans[0] + 1);
        }

        sort(result.begin(), result.end());

        return result[0];
    }
};