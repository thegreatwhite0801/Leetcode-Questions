class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans = nums ; 
        int product = 1 ; 
        bool flag= false; 
      int count = 0 ; 
        for(auto x :nums){
           if(x!=0){
               product*=x ; 
               
           }
        else{
            count+=1; 
            
        }
       }
    if(count>1){
        vector<int>final2(nums.size(),0); 
        return final2; 
    }
    else if(count==0){
      for(int i = 0 ; i<ans.size();i++){
          ans[i]=product/ans[i]; 
      } 
    }
    else { 
        for(int i = 0 ; i<ans.size();i++){
        if(ans[i]!=0){
            ans[i]=0; 
        }
        else{ 
        ans[i]=product; 
        }
        } 
        }
    return ans ; 
    
    }
};