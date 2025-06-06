class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romantoint = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}};

        int sum = romantoint[s[0]]; 
        for (int i = 1; i<s.length();i++){
            if(romantoint[s[i]] > romantoint[s[i-1]]){
                sum += romantoint[s[i]] - 2*romantoint[s[i-1]];
            } else {
                sum += romantoint[s[i]];
            }
        }

        return sum;
        }   
};