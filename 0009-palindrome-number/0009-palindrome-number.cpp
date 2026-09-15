class Solution {
public:
    bool isPalindrome(int x) {
        int given_No = x;
        long long rev = 0;


while (x > 0) {
    rev = rev * 10 + x % 10;
    x /= 10;
}
if ( rev != given_No){
    return false;
}

        return true;
    }
};