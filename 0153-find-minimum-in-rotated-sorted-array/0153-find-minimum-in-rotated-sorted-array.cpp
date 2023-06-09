class Solution {
public:
    int findMin(vector<int>& nums) {
     int minm=INT_MAX; 
        if(nums.size()==1)return nums[0];
      int i = nums.size()-1 ;
        int j =0 ; 
        if(nums[j]>=nums[i]){
        while(nums[j]>=nums[i]&&j<i){
            minm=min(nums[i],minm);
           cout<<minm ; 
            i-=1;
        }
      }
        else{
            while(nums[j]<nums[i]&&j<i){
                minm=min(nums[j],minm); 
                j+=1; 
            }
        }
    
    return minm ; 
    }
};