class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        map<int, int> map;   // using ordered map

        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                map[nums[i]]++;
            }
        }

int ans=-1;
int maxFreq=0;

if(map.size()!=0){
        for( auto it: map){
            if(it.second>maxFreq){
                maxFreq=it.second;
                ans=it.first;
            }

  
        }
        return ans;
}
else{
    return -1;
}



    }
};