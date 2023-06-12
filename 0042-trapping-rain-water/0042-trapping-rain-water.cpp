class Solution {
public:
    int water_calculator(int front, int back, vector<int>& height) {
        int total = 0;
        int minm = min(height[front], height[back]);

        for (int i = back + 1; i < front; i++) {
            total += minm - height[i];
        }

        return total;
    }

    int trap(vector<int>& height) {
        int total_water = 0;
        int size = height.size();
        if (size <= 2) {
            return 0;
        }

        vector<int> leftMax(size, 0);
        vector<int> rightMax(size, 0);

        leftMax[0] = height[0];
        for (int i = 1; i < size; i++) {
            leftMax[i] = max(leftMax[i - 1], height[i]);
        }

        rightMax[size - 1] = height[size - 1];
        for (int i = size - 2; i >= 0; i--) {
            rightMax[i] = max(rightMax[i + 1], height[i]);
        }

        for (int i = 1; i < size - 1; i++) {
            total_water += min(leftMax[i], rightMax[i]) - height[i];
        }

        return total_water;
    }
};
