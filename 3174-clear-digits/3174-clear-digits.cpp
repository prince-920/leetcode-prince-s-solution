class Solution {
public:
    string clearDigits(string s) {
        int n = s.length();

        stack<char>st;
        string result = "";
for ( int i =0 ; i< n ; i++){

if ( (s[i]!='0' )&&s[i]!='2'&&s[i]!='3'&&s[i]!='4'&&s[i]!='5'&&s[i]!='6'&&s[i]!='7'&&s[i]!='8'&&s[i]!='9' &&s[i]!='1'){

    st.push( s[i]);

}
else{
    st.pop();
}


}
while ( !st.empty()){
    result.push_back(st.top());
    st.pop();
}
reverse( result.begin(), result.end());
return result;







    }
};