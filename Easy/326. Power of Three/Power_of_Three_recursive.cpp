class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 0) return false;
        return (isPowerOfThree(n/3) && n % 3 == 0) || n == 1;
    }
};