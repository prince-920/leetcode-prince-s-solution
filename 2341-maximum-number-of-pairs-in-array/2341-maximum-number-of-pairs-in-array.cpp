class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int  n = nums.size();
        map<int,int>map;
        for( int i =0 ;i<n ;i++){
            map[nums[i]]++;
        }
        int count=0;
        int leftover=0;
        vector<int>ans;

        for( auto it:map){
            if( it.second%2==0){//even
                count = count+it.second/2;
            }
            else{ //odd
            count= count+it.second/2;
            leftover= leftover+1;

            }
        }

        ans.push_back(count);
        ans.push_back(leftover);
        return ans;
        
    }
};