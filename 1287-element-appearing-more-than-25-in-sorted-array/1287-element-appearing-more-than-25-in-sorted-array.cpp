class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        // return no which is appearing more than 25percent of the array.size()

        int n = arr.size();

      float  m =(float) n/4;

      unordered_map<int,int>map;

      for( int i =0 ;i<n;i++){

        map[arr[i]]++;
      }
int ans=0;
      for ( auto it: map){
        if( it.second>=m){ return it.first;} 
      }


        return -1;
    }
};