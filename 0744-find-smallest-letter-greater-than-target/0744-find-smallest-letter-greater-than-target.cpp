class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int t= (int)target;

vector<int>order;

    for( int i =0; i<letters.size();i++){
        order.push_back((int)letters[i]);

    
    }
   // sort( order.begin(),order.end());

 int ans=0;
    for( int i =0 ; i<order.size();i++){
        if ( order[i]>t){
            ans= order[i];
            break;
        }
       
        
    }

    if( ans==0){
    return (char)order[0];

    }
    
else{
    return (char)ans;}
        
    }
};