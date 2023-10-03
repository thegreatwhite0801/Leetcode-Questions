#include <iostream>
#include <vector>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int nonZeroIndex = 0; 
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
               
                nums[nonZeroIndex] = nums[i];
                if (nonZeroIndex != i) {
                    
                    nums[i] = 0;
                }
                nonZeroIndex++;  
            }
        }
    }
};


