class Solution {
public:
    bool canJump(vector<int>& nums) {
        int check = 0 ; 
        
    for(int i =0 ; i<=check;i++){
     check = max(check,i+nums[i]); 
     if(check>=nums.size()-1)return true ; 
        
        
        
    }
    
    
    
    return false; 
    }
};