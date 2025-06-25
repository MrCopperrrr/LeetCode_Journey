class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n ==0) return false;     
        return (isPowerOfTwo(n/2) && n % 2 ==0) || n==1;
    }
};