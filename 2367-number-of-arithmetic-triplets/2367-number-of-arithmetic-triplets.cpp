class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
    unordered_map<int,int>map1; 
        vector<int>ans; 
        for(int i= 0 ; i<nums.size();i++){
            map1[nums[i]]=i ; 
        }
    
    for(int i = 0 ; i<nums.size();i++){
        if(map1.find(nums[i]+diff)!=map1.end()){ 
        if(map1[nums[i]+diff]!=i && map1.find(nums[i]+diff+diff)!=map1.end()){
        if(map1[nums[i]+diff+diff]!=i&&map1[nums[i]+diff+diff]!=map1[nums[i]+diff]){
            ans.push_back(i); 
        ans.push_back(map1[nums[i]+diff]);
        ans.push_back(map1[nums[i]+diff+diff]);    
       
        }
        }
        }
    
    
    
    }
    return ans.size()/3;
    }
};