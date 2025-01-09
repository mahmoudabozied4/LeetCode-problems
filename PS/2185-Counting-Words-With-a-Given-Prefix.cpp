class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        for (auto& it : words) ans += it.find(pref) == 0;
        return ans;
    }
};