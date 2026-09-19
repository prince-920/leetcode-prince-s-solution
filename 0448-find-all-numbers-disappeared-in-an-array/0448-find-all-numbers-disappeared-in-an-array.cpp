class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int>map;

        for( int i =0 ; i<n;i++){
            map[nums[i]]++;
        }
        vector<int>ans;
        for( int i =1 ;i<=n;i++){
                        //    cout<<it.first;

            if (map.find(i)==map.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};