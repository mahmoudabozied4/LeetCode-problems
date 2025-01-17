class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int cumulativeXOR = 0;

        for (int element : derived) {
            cumulativeXOR ^= element;
        }
        return cumulativeXOR == 0;
    }
};