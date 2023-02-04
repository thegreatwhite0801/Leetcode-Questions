class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans ; 
        int cunt = count(nums.begin(),nums.end(),0); 
        if(cunt>1)return vector<int>(nums.size(),0); 
        if(cunt==0){
            int product =1 ;
            for(auto x : nums){
                product*=x ;
            }
            
            for(auto x:nums ){
             ans.push_back(product/x);    
            }
                
        }
    if(cunt==1){
        int product=1 ; 
        for(auto x : nums){
         if(x!=0)product*=x; 
        }
       for(auto x:nums){
           if(x==0)ans.push_back(product);
           else ans.push_back(0); 
       }
    
    
    }
    
    
    return ans ; 
    }
};