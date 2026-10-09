class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<int>original_heights=heights;

// heights in decr order
        sort( heights.rbegin(), heights.rend());

       map<int,string>map;

       for( int i =0 ; i<original_heights.size() ; i++){
       // for( int j =0; j<names.size();j++){

          //  map(original_heights[i]).push_back(names[j]);
          map[original_heights[i]] = names[i];



       


       }
// ab pairs ban gye h , int , string ka

vector<string>ans;
for ( auto i =0 ; i<heights.size() ; i++){
   // ans.push_back(map[heights[i]].second);

   ans.push_back(map[heights[i]]);
}
return ans;


        
    }
};