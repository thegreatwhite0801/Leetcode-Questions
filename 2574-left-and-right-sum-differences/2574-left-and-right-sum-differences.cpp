class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
    vector<int>ans; 
    int leftsum =0. ;
        for(auto x : nums){
        leftsum+=x; 
    }
   int rightsum = 0 ;
      
        for(auto x: nums){
       leftsum-=x; 
            ans.push_back(abs(leftsum-rightsum)); 
     rightsum+=x; 
       
        
        }
        return ans; 
        
    }
};