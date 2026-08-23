class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for ( int i =0 ; i<nums1.size();i++){
            for ( int j =0 ;j<nums2.size();j++){
               if ( nums1[i]>nums2[j]){
                ans.push_back( 10*nums2[j]+nums1[i]);
               }
               else if ( nums1[i]<nums2[j]){
                ans.push_back( 10*nums1[i]+nums2[j]);
               }
               else if (nums1[i]==nums2[j]){
                ans.push_back( nums1[i]);
               }

            }
        }

        sort ( ans.begin(),ans.end());
        if( ans.size()!=0){
        return ans[0];
}
        
        return {};
    }
};