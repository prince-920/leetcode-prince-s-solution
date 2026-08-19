class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        map<int,int>map;

        for( int i =0 ;i<n ;i++){
            map[arr[i]]++;
        }
        // need to return largest it.first==it.second





vector<int>ans;
        
        for( auto it:map){
            if ( it.first==it.second){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        if (ans.size()!=0){
            return ans[ans.size()-1];
        }
        return -1;
    }
};