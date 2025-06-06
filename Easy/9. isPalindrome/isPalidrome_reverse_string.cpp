class Solution {
public:
    bool isPalindrome(int x) {
        string str_x = to_string(x);
        string rev_x = str_x;
        reverse(rev_x.begin(),rev_x.end());
        return str_x == rev_x ;

    }
};