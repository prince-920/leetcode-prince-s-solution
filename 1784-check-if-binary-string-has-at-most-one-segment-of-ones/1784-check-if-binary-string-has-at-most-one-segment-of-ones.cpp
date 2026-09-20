class Solution {
public:
    bool checkOnesSegment(string s) {
//s[0]===1 , so s will always start with 1
        for ( int i =1; i<s.size();i++){
            if ( s[i-1]=='0'&& s[i]=='1'){
                return false;
            }
        }
        return true;
    }
};