class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        stack<char>st;
        vector<char>result;

        for ( int i =0 ; i< n ; i++){
            st.push(s[i]);
        }
        while ( !st.empty()){
            result.push_back(st.top());
            st.pop();
        }

        s=result;

        
        


    }
};