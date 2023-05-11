class Solution {
public:
   vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
    sort(begin(score), end(score), [&](const auto &s1, const auto &s2){ return s1[k] > s2[k]; });
    return score;
}
};