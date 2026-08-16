class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count =0;
        for ( int i =n-1;i>=0;i--){
            if( s[i]!=' '){
                count++;

            }
            //  means count>0 tb hi hoga jab ek word complete ho chuka hoga
            else if( count>0) break;

        }
        return count;
        
    }
};   