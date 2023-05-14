class Solution {
public:
    int minPairSum(vector<int>& nums) {
  sort(nums.begin(),nums.end());
   int final =INT_MIN ; 
   int n = nums.size();
        for(int i = 0 ; i<n/2;i++){
        
         final=max(nums[i]+nums[n-1-i],final); 
    }  
    return final;    
        
    }
};
