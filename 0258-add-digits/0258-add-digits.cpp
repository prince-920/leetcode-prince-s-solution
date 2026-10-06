class Solution {
public:
    int solve(int num) {

        // base condition
        if (num < 10)
            return num;

        // extracting digit
        int digitSum = 0;
        while (num > 0) {
            int digit = num % 10;
            digitSum = digitSum + num % 10;
            num = num / 10;
        }

       return solve(digitSum);
    }
    int addDigits(int num) { 
        return solve(num); }
};