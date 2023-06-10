class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
     unordered_map<int,int>map1; 
        unordered_map<int,int>map2 ; 
        vector<int>ans(nums.size(),0); 
       vector<int>suffix(nums.size(),0); 
        vector<int>prefix(nums.size(),0); 
        for(int i = 0 ;i<nums.size();i++){
            map1[nums[i]]++ ; 
            map2[nums[nums.size()-1-i]]++; 
            prefix[i]= map1.size(); 
           if(map2[nums[nums.size()-1-i]]==1) suffix[nums.size()-1-i]=map2.size()-1; 
           else suffix[nums.size()-1-i]=map2.size(); 
        }
   
    
        for(int i = 0 ; i <ans.size();i++){
        
            ans[i]=prefix[i]-suffix[i]; 
    }
    return ans ;
    
    }
};