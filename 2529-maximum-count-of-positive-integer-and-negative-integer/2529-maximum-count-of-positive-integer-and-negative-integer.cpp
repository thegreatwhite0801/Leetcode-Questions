class Solution {
public:
    int maximumCount(vector<int>& nums) {
       int count = 0 ;
        int z= 0; 
        for(auto x :nums){
           if(x<0){
               count++; 
           }
        else if(x==0)z++; 
            else{
                break; 
            }
       } 
    
    return max(count,static_cast<int>(nums.size()-count-z)); 
    }
};