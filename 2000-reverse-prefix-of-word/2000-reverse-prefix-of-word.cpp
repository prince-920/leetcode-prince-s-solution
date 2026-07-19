class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.length();
        string result = "";
        stack < char>st;

int index = word.find(ch);

  
     for ( int i =0 ; i<=index; i++){
        st.push(word[i]);
    }

        while( !st.empty()){
            result.push_back(st.top());
            st.pop();
        }

        for ( int i = index+1; i<n ;i++){
            result.push_back( word[i]);
        }
        return result;
   






        
    }
};