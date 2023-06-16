class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>map1;
        for(auto x : nums){
            map1[x]++; 
            
        }
    
    
    for(auto it : map1)if(it.second%2==1)return false; 
    return true; 
    
    }
};