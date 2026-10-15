class Solution {
public:
    int sumCounts(vector<int>& nums) {

        // Listen we need subarr not subset 
        //subset--> 2 power n --> kuch bhi ho sakta h like all the possible choices in a set , 
        //subarray --> is also a subset but sirf contiguous manner me hona chahiye like bich me gaps nhi ho sakte 
        //[1,2,1] 
        //subset--> [],[1],[2],[1],[1,2],[2,1],[1,1],[1,2,1]
        //subarry-->all but [1,1],[] ye dono nahi honge

        //agr subset nikalna h to use dp
        //age subarr->

        int n= nums.size();

        //storing count of distinct elements in a subarr
        vector<int>count;

        vector<vector<int>>subarry;
        for(int i =0 ; i<n ; i++){
            for( int j=i ; j<n ; j++){
                
                vector<int>sub;
                for( int k= i;k<=j;k++){
                    sub.push_back(nums[k]);



                }
                sort(sub.begin(),sub.end());
                sub.erase(unique(sub.begin(),sub.end()),sub.end());
                subarry.push_back(sub);
                //storing count of all diff elements in an arr

                count.push_back(sub.size());

            }


        }

        // transversing the count
int sum=0;
        for(int i =0 ; i<count.size();i++){
            sum = sum +count[i]*count[i];
            
        }
    
    return sum;



        
    }
};