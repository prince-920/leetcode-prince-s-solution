class Solution {
public:


    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();

        vector<int>ans;
        map<int,int>map;
int count= nums.size();
        for( int i =0  ; i<n ;i++){
            map[nums[i]]++;
        }

      while(count!=0) { 
        for( auto &it: map){
            
           if( it.second>0) {
            ans.push_back(it.first);
       

            it.second--;
                count--;}
        }}
        return ans;
        
    }
};