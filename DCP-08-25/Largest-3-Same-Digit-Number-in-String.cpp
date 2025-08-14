class Solution {
public:
    string largestGoodInteger(string num) {
        for (int i = '9'; i >= '0'; --i) {
            string s(3, i);

            if (num.find(s) != -1) {
                return s;
            }
        }
        return "";
    }
};