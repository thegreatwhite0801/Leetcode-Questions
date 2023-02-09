class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end()); 
        unordered_map<int,int>map1; 
        for(int i = 0 ;i<nums.size();i++){
            map1[nums[i]]= i ;     
            
        }
    
     
        vector<vector<int>>ans; 
        for(int i = 0 ;i<nums.size()-1;i++){
           if(nums[i]>0){
               break; 
           }
           
           for(int j=i+1;j<nums.size();j++){
               int check = -1*(nums[i]+nums[j]);
              if(map1.find(check)!=map1.end()&&map1.find(check)->second>j){
                 
                  ans.push_back({nums[i],nums[j],check}); 
                  
                  
             
               
               
           
           
           
       }
    
   j = map1.find(nums[j])->second ;  
    
           
           }
        
        
        i= map1.find(nums[i])->second ;
        
        
        }
    
    
    
    return ans; 
    }
};