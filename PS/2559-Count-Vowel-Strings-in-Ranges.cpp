class Solution {
public:
    vector<int> vowelStrings(vector<string>& words,
                             vector<vector<int>>& queries) {
        vector<int> v(words.size());
        auto is_vowel = [](char c) {
            return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u';
        };
        for (int i = 0; i < words.size(); i++) {
            v[i] += is_vowel(words[i][0]) && is_vowel(words[i].back());
        }
        for (int i = 1; i < v.size(); i++)
            v[i] += v[i - 1];
        vector<int> ans;
        for (auto it : queries) {
            int st = it[0], ed = it[1];
            if (st)
                ans.push_back(v[ed] - v[st - 1]);
            else
                ans.push_back(v[ed]);
        }
        return ans;
    }
};