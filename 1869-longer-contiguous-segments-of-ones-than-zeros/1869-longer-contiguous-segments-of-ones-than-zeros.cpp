class Solution {
public:
    bool checkZeroOnes(string s) {
int count1=0;
int count=0;

int max1=0;
int max0=0;

        for( int i =0 ; i<s.size();i++){
            if ( s[i]=='1'){
                count++;
            }
            else{
                count1=max(count,count1);
                count=0;

            }
        }
        count1 = max(count, count1);
        max1=count1;

         count =0; 
        int count0=0;
//counting max 0
for( int i =0 ; i<s.size();i++){
            if ( s[i]=='0'){
                count++;
            }
            else{
                count0=max(count,count0);
                count=0;

            }
        }
        count0 = max(count, count0);
        max0=count0;

if ( max1>max0) return true;
else{
    return false;
}


        
    }
};