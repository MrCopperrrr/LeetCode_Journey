class Solution {
public:
    bool isPerfectSquare(int num) {
        return (sqrt(num) == round(sqrt(num)));
    }
};