class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> brackets = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        
        stack<char> stack;
        
        for (char c : s) {
            if (brackets.count(c)) {
                if (stack.empty() || stack.top() != brackets[c]) {
                    return false;
                }
                stack.pop();
            } else {
                stack.push(c);
            }
        }
        
        return stack.empty();
    }
};