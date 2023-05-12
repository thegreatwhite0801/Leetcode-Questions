class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        for (int i = 0; i < l.size(); i++) {
            vector<int> temp;
            bool flag = true;
            for (int j = l[i]; j <= r[i]; j++) {
                temp.push_back(nums[j]);
            }
            sort(temp.begin(), temp.end(), less<int>());
            int diff = 0;
            int prev = 0;
            for (int j = 0; j < temp.size() - 1; j++) {
                if (j == 0) {
                    diff = temp[1] - temp[0];
                    prev = diff;
                } else {
                    diff = temp[j + 1] - temp[j];
                    if (prev != diff) {
                        ans.push_back(false);
                        flag = false;
                        break;
                    }
                }
            }
            if (flag) {
                ans.push_back(true);
            }
        }
        return ans;
    }
};
