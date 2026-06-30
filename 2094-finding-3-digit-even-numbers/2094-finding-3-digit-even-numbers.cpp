class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>ans;
        int n = digits.size();
        for ( int i = 0 ; i< n ; i++){
            for ( int j = 0 ; j<n ; j++){
                for ( int k = 0 ; k<n ; k++){
                    if ( i == j ||i == k || j ==k){
                        continue;
                    }
             
                int num = 100*digits[i]+ 10 * digits[j]+digits[k];
                 if ( num>=100 && num< 1000 &&  num%2 ==0){
                ans.push_back( num);
              
              
              }
             






                }
            }
        }
                sort( ans.begin(), ans.end());

        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;


    }
};