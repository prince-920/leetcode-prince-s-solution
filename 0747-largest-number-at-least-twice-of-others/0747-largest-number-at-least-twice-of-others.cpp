class Solution {
public:
    int dominantIndex(vector<int>& nums) {
     
     vector<int>real_order;
     real_order= nums;
sort(nums.begin(),nums.end());
     int largest= nums[nums.size()-1];

int ans=1;
for( int i = 0 ; i<nums.size()-1;i++){
    if( largest<2* nums[i]){
        ans=0;
        break;
    }
    

}

int index=0;
if( ans==0){
    return -1;
}
else{
    for( int i =0 ; i<real_order.size();i++){

        if ( real_order[i]==largest){
            index= i;
        }
    }
    
    
}
return index;

        
    }
};