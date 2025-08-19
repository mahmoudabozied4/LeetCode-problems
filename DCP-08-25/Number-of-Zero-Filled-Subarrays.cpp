class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0, z = 0;

        for (auto x : nums) {
            z = (x != 0) ? 0 : z + 1;
            ans += z;
        }

        return ans;
    }
};
