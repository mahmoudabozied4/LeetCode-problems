class Solution {
public:
    int countPrefixSuffixPairs(vector<string> &words) {
        int ans = 0;
        for (int i = 0; i < words.size(); ++i) {
            string a = words[i];
            for (int j = i + 1; j < words.size(); ++j) {
                string b = words[j];
                if (b.find(a) == 0 && b.rfind(a) == b.size() - a.size()) ans++;
            }
        }
        return ans;
    }
};