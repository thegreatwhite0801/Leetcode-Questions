class Solution {
public:
   vector<vector<int>>final; 
    void creator(vector<int>&nums,vector<int>temp){
     if(temp.size()==nums.size()){final.push_back(temp);return;}
     for(int i = 0 ;i<nums.size();i++){
         if(nums[i]!=-11){temp.push_back(nums[i]); 
         int org =nums[i]; 
         nums[i]=-11;
         creator(nums,temp);
         nums[i]=org;
         temp.pop_back(); }
     }
return; 

    }
    
    
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        creator(nums,{}); 
        return final ;
    }
};