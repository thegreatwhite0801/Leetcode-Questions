class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>map1; 
        for(auto x :nums){
            map1[x]++; 
            int temp =map1[x]; 
            if(temp>1)return true;
        }
    
    
    return false ; 
    }
};