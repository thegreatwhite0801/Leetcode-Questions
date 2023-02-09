class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>map1; 
        for(int i = 0 ;i<numbers.size();i++){
            map1[numbers[i]]=i; 
        }
        vector<int>ans; 
        
        for(int i= 0 ;i<=numbers.size();i++){
         if(map1.find(target-numbers[i])!=map1.end()){
  ans.push_back(i+1);
             ans.push_back(map1[target-numbers[i]]+1); 
         return ans; 
         }    
            
        
        
        
        
        }
        
        
     return ans ;   
        
    }
};