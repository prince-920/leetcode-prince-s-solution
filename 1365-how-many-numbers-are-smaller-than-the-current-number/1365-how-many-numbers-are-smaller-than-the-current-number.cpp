class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

    int n = nums.size();
    map<int,int>map;
    vector<int>ans;
    for ( int i =0 ;i<n ;i++){
        map[nums[i]]++;
    }
   // sort ( nums.begin(), nums.end());

    for ( int i=0 ;i<n ;i++){
    int count =0;

    for( int j =0 ;j<n ;j++){
    
                if ( nums[i]>nums[j]){
                count++;

            

            
        }
        
    }
    ans.push_back(count);

    }
return ans;



        
    }
};