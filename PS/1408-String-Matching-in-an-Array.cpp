class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        for ( auto  a : words)
            for (auto  b : words)
                if (a.length() < b.length() && b.find(a) != string::npos) {
                    ans.push_back(a);
                    break;
                }
        return ans;
    }
};
