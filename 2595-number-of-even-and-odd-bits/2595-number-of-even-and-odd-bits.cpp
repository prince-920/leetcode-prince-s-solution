class Solution {
public:
    vector<int> evenOddBit(int n) {
        bitset<64>bits(n);
        vector<int>ans;
 int even = 0;
        int odd = 0;
      for ( int i =0 ;i <64 ; i++){
       
        if ( bits[i] ==1 && ( i %2 ==0 )){
            even++;


        }
        if ( bits[i] ==1 && ( i %2 !=0 )){
            odd++;

        }
                         
      }
      ans.push_back(even);

         ans.push_back( odd );

      return ans;


    }
};