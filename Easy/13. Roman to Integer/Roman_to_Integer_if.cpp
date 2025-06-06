class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for(int i = 0; i < s.length(); i++) {
            if (s[i] == 'I') sum += 1;
            if (s[i] == 'V') {
                sum += 5;
                if(i > 0 && s[i-1] == 'I') sum -=2;
            }
            if (s[i] == 'X') {
                sum += 10;
                if(i > 0 && s[i-1] == 'I') sum -=2;
            }
            if (s[i] == 'L') {
                sum += 50;
                if(i > 0 && s[i-1] == 'X') sum -=20;
            }
            if (s[i] == 'C') {
                sum += 100;
                if(i > 0 && s[i-1] == 'X') sum -=20;
            }
            if (s[i] == 'D') {
                sum += 500;
                if(i > 0 && s[i-1] == 'C') sum -=200;
            }
            if (s[i] == 'M') {
                sum += 1000;
                if(i > 0 && s[i-1] == 'C') sum -=200;
            }
        }
        return sum;
    }
};