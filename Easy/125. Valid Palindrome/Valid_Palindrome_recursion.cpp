class Solution {
public:
    bool isPalindrome(string s) {
        return fun(s, 0, s.length() - 1);
    }

    bool fun(const string& s, int L, int R){
        while (L < R && !isalnum(s[L])) L++;
        while (L < R && !isalnum(s[R])) R--;

        if(L >= R) return true;
        if(tolower(s[L]) != tolower(s[R])) return false;
        return fun(s, L + 1, R - 1);
    }
};