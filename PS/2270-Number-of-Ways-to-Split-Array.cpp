class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long ans = 0, pref = 0;
        long long  suf = accumulate(nums.begin(), nums.end(), 0LL);
        for (int i = 0; i < nums.size() - 1; i++) {
            pref += nums[i], suf -= nums[i];
            if (pref >= suf) ans++;
        }
        return ans;
    }
};