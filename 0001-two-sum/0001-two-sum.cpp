class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
  /*      vector<int>ans; 
        for(int i= 0 ;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){ans.push_back(i);ans.push_back(j);return ans; }
            }
        }
    
    return ans ; 
    } */
        unordered_map<int,int>map1; 
        vector<int>ans;
        for(int i = 0 ;i<nums.size();i++){
            int temp =target-nums[i]; 
            
                if(map1.find(temp)!=map1.end()){
                    ans.push_back(map1[temp]); 
                    ans.push_back(i); 
                return ans; 
                }
            
        map1[nums[i]] = i ; 
        
        
        }
    return ans ;    
    }
        
};