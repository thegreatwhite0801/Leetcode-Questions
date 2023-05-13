class Solution {
public:
    int minPairSum(vector<int>& nums) {
  sort(nums.begin(),nums.end());
   int final =INT_MIN ; 
   int n = nums.size();
        for(int i = 0 ; i<n/2;i++){
        int temp =nums[i]+nums[n-1-i];
         final=max(temp,final); 
    }  
    return final;    
        
    }
};