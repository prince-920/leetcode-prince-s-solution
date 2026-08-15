class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        map<int,int>map;
        int n=nums.size();

        for(int i =0;i<n ;i++){
            map[nums[i]]++;
        }
vector<int>ans;
        for( auto it:map){
            if ( it.second>n/3){
                ans.push_back(it.first);
            }



        }
        return ans;


    }
};