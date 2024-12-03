class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        auto vaild = [](char ch) {
            if (ch == ']')
                return '[';
            if (ch == ')')
                return '(';
            return '{';
        };
        for (char ch : s) {
            if (ch == '{' || ch == '(' || ch == '[') {
                stk.push(ch);
            } else {
                if (stk.empty() || stk.top() != vaild(ch)) {
                    return false;
                }
                stk.pop();
            }
        }
        return stk.empty();
    }
};