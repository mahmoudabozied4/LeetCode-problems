class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        auto it = nums;
        for (auto i : nums)
            it.push_back(i);
        return it;
    }
};