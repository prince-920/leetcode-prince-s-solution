class Solution {
public:
    string reversePrefix(string s, int k) {
        int n = s.length();
        stack<int> st;
        string result ="";

        for ( int i =0  ; i<k ; i++){
            st.push(s[i]);

        }
        while ( !st.empty()){
            result.push_back(st.top());
            st.pop();
        }

        for( int i=k ; i<n ;i++){
            result.push_back( s[i]);
        }
        return result;


    }
};