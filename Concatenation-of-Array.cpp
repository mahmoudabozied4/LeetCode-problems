class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector <int> a(2*nums.size());
        for(int i = 0 ; i < a.size() ;i++){
            a[i] = nums[i%nums.size()];
        }   
        return a;
    }
};