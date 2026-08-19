class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int>result;
       unordered_map<int,int>map;
        while ( n!=0){
            int digit = n%10;
            result.push_back(digit);
          n=  n/10;
        }
       vector<vector<int>>ans;

        for ( int i =0; i<result.size() ;i++){
            map[result[i]]++;
        }

        for( auto it: map){
            ans.push_back({it.second,it.first});
        }

        sort(ans.begin(),ans.end());
        return ans[0][1];

        
    }
};