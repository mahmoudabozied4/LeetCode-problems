class Solution {
private:
    double extraPassRatio(int pass, int total) {
        return (pass + 1) / static_cast<double>(total + 1) -
               pass / static_cast<double>(total);
    }
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<tuple<double, int, int>> pq;
        for (const vector<int>& c : classes) {
            const int pass = c[0];
            const int total = c[1];
            pq.emplace(extraPassRatio(pass, total), pass, total);
        }

        for (int i = 0; i < extraStudents; ++i) {
            const auto [_, pass, total] = pq.top();
            pq.pop();
            pq.emplace(extraPassRatio(pass + 1, total + 1), pass + 1,
                            total + 1);
        }

        double ratioSum = 0;

        while (!pq.empty()) {
            const auto [_, pass, total] = pq.top();
            pq.pop();
            ratioSum += pass / static_cast<double>(total);
        }

        return ratioSum / classes.size();
    }
};