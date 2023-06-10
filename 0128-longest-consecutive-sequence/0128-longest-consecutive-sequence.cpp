class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
            return 0;

        vector<int> sortedNums(nums);  
        sort(sortedNums.begin(), sortedNums.end());

        int maxCount = 1;
        int currentCount = 1;

        for (int i = 1; i < sortedNums.size(); i++) {
            if (sortedNums[i] == sortedNums[i - 1])
                continue;
            else if (sortedNums[i] == sortedNums[i - 1] + 1)
                currentCount++;
            else {
                maxCount = max(maxCount, currentCount);
                currentCount = 1;
            }
        }

        return max(maxCount, currentCount);
    }
};
