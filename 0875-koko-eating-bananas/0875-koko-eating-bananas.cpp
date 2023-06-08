class Solution {
public:
    bool canEatAllBananas(vector<int>& piles, int k, int h) {
        int hours = 0;
        for (int bananas : piles) {
            hours += (bananas + k - 1) / k;
        }
        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int maxPile = *std::max_element(piles.begin(), piles.end());

        int left = 1;  // Minimum possible speed
        int right = maxPile;  // Maximum possible speed

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canEatAllBananas(piles, mid, h)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
};