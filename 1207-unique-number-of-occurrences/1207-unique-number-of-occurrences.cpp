class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
unordered_map<int,int>map;

int n = arr.size();

for ( int i =0 ; i<n ; i++){
    map[arr[i]]++;
}

vector<int>ans;

for( auto it:map){
  ans.push_back(it.second);


}
// if(ans[ans.size()-1]==ans.size()) return true;

// return false;

for( int i =0 ; i<ans.size();i++){
    for(int j =i+1;j<ans.size();j++){
        if ( ans[j]==ans[i]) return false;
    }
}
return true;



    }
};