class Solution {
public:
    int findGCD(vector<int>& nums) {
       sort(nums.begin(),nums.end()); 
       int n = nums.size()-1;
      for(int i = nums[0];i>0;i--){
          if(nums[0]%i==0&&nums[n]%i==0)return i ; 
      }
    return 0 ;
    }
};