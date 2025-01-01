class Solution {
public:
    int maxScore(string s) {
        int c1 = 0, c2 = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] - '0')
                c1++;
        }
        int ans = 0;
        for (int i = 0; i + 1 < s.size(); i++) {
            if (!(s[i] - '0'))
                c2++;
            else
                c1--;
            ans = max(ans, c1 + c2);
        }
        return ans;
    }
};