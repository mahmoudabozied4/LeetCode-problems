class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int ans = 0;
        for (char c = 'a'; c <= 'z'; ++c) {
            int idx1 = s.find_first_of(c) , idx2 = s.find_last_of(c);
            set<char> st;
            for (int i = idx1 + 1; i < idx2; ++i) {
                st.insert(s[i]);
            }
            ans += st.size();
        }
        return ans;
    }
};