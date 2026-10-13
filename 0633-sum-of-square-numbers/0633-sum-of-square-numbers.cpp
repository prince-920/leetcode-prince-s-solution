class Solution {
public:
    bool judgeSquareSum(int c) {

        long long a=0 ; long long b=pow(c,0.5);
bool flag= false;
        while(a<=b){
            long long sum = a * a + b * b;
            if ( sum== c) {flag= true; break;}
            else if (sum<c) a++;
            else b--;
        }
        return flag;
        
    }
};