class Solution {
public:
    int minLength(string s) {
        int n = s.length();

        stack < char> st;
        string result = "";
        for ( int i =0 ; i< n ; i++){
       if ( !st.empty()&& ((st.top()=='A'&& s[i]=='B')||(st.top()=='C'&&s[i]=='D'))){
        st.pop();
       }


        else { 
            st.push( s[i]);
        }
        }
        while ( !st.empty()) {
result.push_back( st.top());
st.pop();
        }
        return result.length();


    }
};