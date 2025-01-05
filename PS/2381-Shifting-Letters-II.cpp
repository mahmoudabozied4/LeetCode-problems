class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int> par(s.size() + 1, 0);

        for (auto it : shifts) {
            if (it[2]) {
                par[it[0]] += 1;
                par[it[1] + 1] -= 1;
            } else {
                par[it[0]] -= 1;
                par[it[1] + 1] += 1;
            }
        }

        for (int i = 1; i < s.size(); i++) {
            par[i] += par[i - 1];
        }

        string ans;
        for (int i = 0; i < s.size(); i++) {
            par[i] %= 26;
            if (par[i] < 0)
                par[i] += 26;

            char shiftedChar = 'a' + (s[i] - 'a' + par[i]) % 26;
            ans += shiftedChar;
        }

        return ans;
    }
};