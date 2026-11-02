class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();

    sort( nums.begin(), nums.end());

 double avg=0;
    if ( n%2!=0){
        // odd no
        avg=nums[(n+1)/2-1];


    }
    else{
        avg=(nums[n/2-1]+nums[(n+2)/2-1])/2;
    }
int sum =0;
    for( int i =0 ; i<n ;i++){
        sum= sum+ abs( nums[i]-avg);


    }
return sum;

        
    }
};