class Solution {
public:
    vector<int> minOperations(string boxes) {

        vector<int> ans(boxes.size());
        int count = 0, moves = 0;
        for (int i = 0; i < boxes.length(); ++i) {
            ans[i] += moves;
            count += boxes[i] - '0';
            moves += count;
        }
        count = moves = 0;
        for (int i = boxes.length() - 1; i >= 0; --i) {
            ans[i] += moves;
            count += boxes[i] - '0';
            moves += count;
        }

        return ans;
    }
};