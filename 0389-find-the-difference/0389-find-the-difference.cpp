class Solution {
public:
    char findTheDifference(string s, string t) {

        int n = s.size();
        int m = t.size();

        int count1=0;
        int count2=0;

        for( int i =0 ; i<n ;i++){
            count1=count1+(int)s[i];
        }

        for( int i =0 ; i<m ;i++){
            count2=count2+(int)t[i];
        }

        return (char)(count2-count1);
        
    }
};