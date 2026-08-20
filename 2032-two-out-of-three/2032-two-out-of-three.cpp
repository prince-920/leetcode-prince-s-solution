class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {

sort( nums1.begin(),nums1.end());
sort( nums2.begin(),nums2.end());
sort( nums3.begin(),nums3.end());



nums1.erase(unique(nums1.begin(),nums1.end()),nums1.end());

nums2.erase(unique(nums2.begin(),nums2.end()),nums2.end());

nums3.erase(unique(nums3.begin(),nums3.end()),nums3.end());

vector<int>count;
for( int i =0;i<nums1.size();i++){
    count.push_back(nums1[i]);
}

for( int i =0;i<nums2.size();i++){
    count.push_back(nums2[i]);
}

for( int i =0;i<nums3.size();i++){
    count.push_back(nums3[i]);
}

sort( count.begin(),count.end());

map<int,int>map;
vector<int>ans;
for ( int i =0;i<count.size();i++){
    map[count[i]]++;

}

for( auto it:map){
    if ( it.second>=2){
        ans.push_back(it.first);
    }
}
if ( ans.size()!=0){
    return ans;
}
return {};






    }
};