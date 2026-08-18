class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        int n = bulbs.size();
map<int,int>map;
        for ( int i =0 ;i<n ;i++){
            map[bulbs[i]]++;

        }
        vector<int> ans;
        for ( auto it: map){
            if ( it.second%2!=0){
                ans.push_back( it.first);
                
            }

        }
        if ( ans.size()!=0){
            return ans;
        }
        else{
            return {};
        }

        
    }
};