class Solution {
public:
    bool isValid(string s) {
        unordered_map <char, char> br =
        {{')', '('}, {']', '['}, {'}', '{'}};
        stack <char> st;
        for(char c:s){
            if(!br.count(c)) st.push(c);
            else {
                if(st.empty() || st.top() != br[c]) return false;
                st.pop();
            }
        }
        return st.empty();
    }
};