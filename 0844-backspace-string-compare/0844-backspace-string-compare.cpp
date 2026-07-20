class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        int n1 = s.length();
        int n2 = t.length();

        stack<char>st1;
        string result1 ="";

         stack<char>st2;
        string result2 ="";

        for (int i =0 ; i<n1 ;i++){
            if ( s[i]=='#'){
               if ( !st1.empty()){
                 st1.pop();
               }

                
            }
            else{
                st1.push(s[i]);
            }
        }
        while( !st1.empty()){
            result1.push_back(st1.top());
            st1.pop();
        }

        for (int i =0 ; i<n2  ;i++){
            if ( t[i]=='#'){
               if ( !st2.empty()){
                 st2.pop();
               }

                
            }
            else{
                st2.push(t[i]);
            }
        }
        while( !st2.empty()){
            result2.push_back(st2.top());
            st2.pop();
        }
        reverse( result1.begin(), result1.end());
                reverse( result2.begin(), result2.end());


        if ( result1==result2){

            return true;
        }
else{
    return false;
}
    }
};