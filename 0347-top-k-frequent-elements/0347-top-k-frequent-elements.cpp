class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
int n = nums.size();

map<int,int>map;

for(int i =0;i<n ;i++){
    map[nums[i]]= map[nums[i]]+1;

}
        vector<pair<int, int>> freq;

vector<int>ans;
int maxfreq=0;
for(auto it:map){
    freq.push_back({it.second, it.first});

}
// now sorting v on basis of freq;
        sort(freq.rbegin(), freq.rend());   // rbegin()--> descending order me sort hoga ,opp of begin()

       for(int i=0;i<k;i++){
        ans.push_back(freq[i].second);
       }


return ans;
        
    }
};